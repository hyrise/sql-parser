#ifndef __SQLPARSERRESULT__
#define __SQLPARSERRESULT__

#include "sql/SQLStatement.h"

namespace hsql {
	/** 
	 * Represents the result of the SQLParser.
	 * If parsing was successful it contains a list of SQLStatement.
	 */
	struct SQLParserResult {
	public:
		SQLParserResult() :
			isValid(true),
			parser_msg(NULL) {};

		SQLParserResult(SQLStatement* stmt) :
			isValid(true),
			parser_msg(NULL) {
			addStatement(stmt); 
		};
			
		virtual ~SQLParserResult() {
			for (std::vector<SQLStatement*>::iterator it = statements.begin(); it != statements.end(); ++it) {
				delete *it;
			}
			delete parser_msg;
		}

		void addStatement(SQLStatement* stmt) { statements.push_back(stmt); }
		SQLStatement* getStatement(int id) { return statements[id]; }
		size_t numStatements() { return statements.size(); }
		
		std::vector<SQLStatement*> statements;
		bool isValid;
		const char* parser_msg;
		int error_line;
		int error_col;
	};

}

#endif // __SQLPARSERRESULT__