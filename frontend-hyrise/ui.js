
/**
 * Bootstrap
 */
$(function() {
	loadSampleQueries('sample-queries.sql');

	$('#submitBtn').click(function() {
		$('#resultTable').html('');
		$('#resultInfo').html('waiting for result...');
		$('#msgContainer').attr('class', 'alert alert-warning');

		var endpointUrl = $('#endpointInput').val();
		var query = $('#queryInput').val();
		var hyrise = new HyriseSQLConnector(endpointUrl);

		hyrise.executeSQLQuery(query, function(result) {
			// On Success
			$('#msgContainer').attr('class', 'alert alert-success');
			$('#resultInfo').html('Result contains ' + result.real_size + ' rows');
			console.log("Query result: ", result);
			updateResultTable(result);
			updatePerformanceData(result);

		}, function(xhr, status, error) {
			// On Error
			console.log(arguments);
			var msg = 'Error when fetching result. Possibly no connection to Hyrise.';
			if (xhr.responseJSON) msg = xhr.responseJSON.error[0];
			$('#resultInfo').html(msg);
			$('#msgContainer').attr('class', 'alert alert-danger');
			$('#performanceDataTable tbody').html('');
		});
	});

	$('#queryInput').keypress(function(evt) {
		if (evt.keyCode == 13 && evt.shiftKey) {
			$('#submitBtn').click();
			return false;
		}
		return true;
	});
});



function loadSampleQueries(url) {
	$.get(url, function(data) {
		var lines = data.split('\n');
		var name, query = "", isBuggy = false;
		$.each(lines, function(i, line) {
			if (line[0] == '#') {
				// Append last query
				if (name && !isBuggy) addSampleQuery(name, query);
				if (name && isBuggy)  addBuggyQuery(name, query);

				// New query
				isBuggy = (line[1] == '!');
				name = line.substring((isBuggy) ? 3 : 2);
				query = "";
			} else {
				query += line + '\n';
			}
		});

		if (name && !isBuggy) addSampleQuery(name, query);
		if (name && isBuggy)  addBuggyQuery(name, query);
	});
}


function addSampleQuery(name, query) {
	var btn = $('<button type="button" class="btn btn-sm btn-success">' + name + '</button>');
	btn.click(function(evt) {
		$('#queryInput').val(query);
		if (!evt.shiftKey) {
			$('#submitBtn').click();
		}
	});
	$('#sampleQueries').append(btn);
}

function addBuggyQuery(name, query) {
	var btn = $('<button type="button" class="btn btn-sm btn-danger">' + name + '</button>');
	btn.click(function(evt) {
		$('#queryInput').val(query);
		if (!evt.shiftKey) {
			$('#submitBtn').click();
		}
	});
	$('#buggyQueries').append(btn);
}

function createElement(tag, value) {
	return $('<' + tag + '>' + value + '</' + tag + '>');
};

function updateResultTable(result) {
	// Present result json in result-view
	var table = $('#resultTable');
	table.html('');

	var th = $('<tr>');
	$.each(result.header, function(i, val) {
		th.append($('<th>' + val + '</th>'));
	});
	table.append(th);

	// Limit the rows to be displayed to 100
	for (var i = 0; i < 100 && i < result.real_size; ++i) {
		var row = result.rows[i];
		var tr = $('<tr>');
		$.each(row, function(j, val) {
			tr.append($('<td>' + val + '</td>'));
		});
		table.append(tr);
	}
};

function updatePerformanceData(result) {
	var tbody = $('#performanceDataTable tbody');
	tbody.html('');

	$.each(result.performanceData, function(i, data) {
		var tr = $('<tr>');
		tr.append(createElement('td', data.id))
		tr.append(createElement('td', data.name))
		tr.append(createElement('td', data.duration))
		tr.append(createElement('td', data.startTime))
		tr.append(createElement('td', data.endTime))
		tbody.append(tr);
	});
};