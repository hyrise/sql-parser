
#include "SQLParserResult.h"

namespace hsql {

    SQLParserResult::SQLParserResult() :
        isValid(true),
        errorMsg(NULL) {};


    SQLParserResult::SQLParserResult(SQLStatement* stmt) :
        isValid(true),
        errorMsg(NULL) {
        addStatement(stmt);
    };


    SQLParserResult::~SQLParserResult() {
        for (std::vector<SQLStatement*>::iterator it = statements.begin(); it != statements.end(); ++it) {
            delete *it;
        }

        delete errorMsg;
    }


    void SQLParserResult::addStatement(SQLStatement* stmt) {
        statements.push_back(stmt);
    }


    SQLStatement* SQLParserResult::getStatement(int id) {
        return statements[id];
    }


    size_t SQLParserResult::size() {
        return statements.size();
    }

} // namespace hsql