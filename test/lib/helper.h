#ifndef __HELPER_H__
#define __HELPER_H__


#define TEST_PARSE_SQL_QUERY(query, outputVar, numStatements) \
	SQLParserResult* outputVar = SQLParser::parseSQLString(query); \
	ASSERT(outputVar->isValid); \
	ASSERT_EQ(outputVar->size(), numStatements);


#define TEST_PARSE_SINGLE_SQL(query, stmtType, stmtClass, outputVar) \
	TEST_PARSE_SQL_QUERY(query, stmt_list, 1); \
    ASSERT_EQ(stmt_list->getStatement(0)->type(), stmtType); \
    stmtClass* outputVar = (stmtClass*) stmt_list->getStatement(0);


#define TEST_CAST_STMT(stmt_list, stmt_index, stmtType, stmtClass, outputVar) \
    ASSERT_EQ(stmt_list->getStatement(stmt_index)->type(), stmtType); \
    stmtClass* outputVar = (stmtClass*) stmt_list->getStatement(stmt_index);


#endif