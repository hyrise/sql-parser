


var HyriseSqlConnector = function(host, port) {

	this.setConnectionDetails(host, port);

}


HyriseSqlConnector.prototype.setConnectionDetails = function(host, port) {
	this._host = host;
	this._port = port;
	return this;
};

HyriseSqlConnector.prototype.executeQuery = function(query, callback) {
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
			callback(result);
		}
	});

	return this;
};