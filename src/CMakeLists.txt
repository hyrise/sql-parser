set(SOURCE_FILES

    parser/bison_parser.cpp
    parser/bison_parser.h
    parser/conflict_test.cpp
    parser/flex_lexer.cpp
    parser/flex_lexer.h
    parser/parser_typedef.h
    sql/CreateStatement.h
    sql/DeleteStatement.h
    sql/DropStatement.h
    sql/ExecuteStatement.h
    sql/Expr.cpp
    sql/Expr.h
    sql/ImportStatement.h
    sql/InsertStatement.h
    sql/PrepareStatement.cpp
    sql/PrepareStatement.h
    sql/SelectStatement.h
    sql/SQLStatement.cpp
    sql/SQLStatement.h
    sql/statements.cpp
    sql/statements.h
    sql/Table.h
    sql/UpdateStatement.h
    util/sqlhelper.cpp
    util/sqlhelper.h
    SQLParser.cpp
    SQLParser.h
    SQLParserResult.cpp
    SQLParserResult.h)

add_library(sql_parser ${SOURCE_FILES})
