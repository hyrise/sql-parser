#ifndef __HELPER_H__
#define __HELPER_H__



#define TEST_PARSE_SINGLE_SQL(query, stmt_type, stmt_class, output_var) \
    SQLStatementList* stmt_list = SQLParser::parseSQLString(query); \
    ASSERT(stmt_list->isValid); \
    ASSERT_EQ(stmt_list->size(), 1); \
    ASSERT_EQ(stmt_list->at(0)->type(), stmt_type); \
    stmt_class* output_var = (stmt_class*) stmt_list->at(0);



#endif