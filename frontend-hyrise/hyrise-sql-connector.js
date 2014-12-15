

var HyriseSQLConnector = function(endpointUrl) {
	this._endpointUrl = endpointUrl;
}

HyriseSQLConnector.prototype.executeSQLQuery = function(query, callback, error_callback) {
	var url = encodeURI(this._endpointUrl);

	jQuery.ajax({
		type: "POST",
		url: url,
		dataType: 'json',
		data: {
			performance: true,
			sql: query
		},
		success: function(result) {
			if (typeof result.real_size === "undefined") {
				result.real_size = 0;
				result.rows = [];
				result.header = [];
			}
			callback(result);
		},
		error: error_callback
	});

	return this;
};