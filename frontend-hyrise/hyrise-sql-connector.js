


var HyriseSqlConnector = function(host, port) {

	this.setConnectionDetails(host, port);

}


HyriseSqlConnector.prototype.setConnectionDetails = function(host, port) {
	this._host = host;
	this._port = port;
	return this;
};


HyriseSqlConnector.prototype.executeQuery = function(query, callback, error_callback) {
	var endpoint = 'http://' + this._host + ':' + this._port + '/query';
	var url = encodeURI(endpoint);

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