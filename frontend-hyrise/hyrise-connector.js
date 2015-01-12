

var HyriseConnector = function(endpointUrl) {
	this._endpointUrl = endpointUrl;
}

HyriseConnector.prototype.executeSQL = function(query, callback, errorCallback) {
	var url = encodeURI(this._endpointUrl);
	var self = this;

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
				if (!result.performanceData) result.performanceData = [];
			}
			
			self._formatPerformanceData(result);
			callback(result);
		},
		error: errorCallback
	});

	return this;
};


HyriseConnector.prototype._formatPerformanceData = function(object) {
	var performanceData = object.performanceData;

	var totalTime = 0;
	var queryTaskTime = 0;

	$.each(performanceData, function(i, data) {
		data.time_ms = data.endTime - data.startTime;

		totalTime += data.time_ms;
		if (data.name === 'SQLQueryTask') queryTaskTime += data.time_ms;
	});

	object.performanceData = {
		totalTime: totalTime,
		queryTaskTime: queryTaskTime,
		operators: performanceData
	}
};


HyriseConnector.prototype.benchmarkSQL = function(query, numRuns, callback) {
	var self = this;

	function __aggregateData(allData) {
		var result = {
			totalTime: 0,
			queryTaskTime: 0,
			numRuns: allData.length,
			operators: []
		};

		var operatorMap = {};

		$.each(allData, function(i, run) {
			var perfData = run.performanceData;
			result.totalTime 	 += perfData.totalTime;
			result.queryTaskTime += perfData.queryTaskTime;

			$.each(perfData.operators, function(i, data) {
				if (!(data.id in operatorMap)) {
					operatorMap[data.id] = data;
				} else {
					operatorMap[data.id].duration 	+= data.duration;
					operatorMap[data.id].startTime 	+= data.startTime;
					operatorMap[data.id].endTime 	+= data.endTime;
					operatorMap[data.id].time_ms 	+= data.time_ms;
				}
			});
		});


		// Calc average and Transform into array
		result.totalTime 	 /= result.numRuns;
		result.queryTaskTime /= result.numRuns;

		$.each(operatorMap, function(id, data) {
			data.duration	/= result.numRuns;
			data.startTime 	/= result.numRuns;
			data.time_ms 	/= result.numRuns;
			result.operators.push(data);
		});

		callback({
			performanceData: result
		});
	}

	var allData = [];
	var n = 0;
	function __run() {
		++n;
		self.executeSQL(query, function(result) {
			allData.push(result);

			// Run again or return aggregated Data
			if (n < numRuns) __run();
			else __aggregateData(allData);
		});
	}

	__run();
};