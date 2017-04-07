
#include "SQLParser.h"
#include "parser/bison_parser.h"
#include "parser/flex_lexer.h"
#include <stdio.h>
#include <string>


namespace hsql {

  SQLParser::SQLParser() {
    fprintf(stderr, "SQLParser only has static methods atm! Do not initialize!\n");
  }

  // static
  bool SQLParser::parseSQLString(const char* text, SQLParserResult* result) {
    yyscan_t scanner;
    YY_BUFFER_STATE state;

    if (hsql_lex_init(&scanner)) {
      // Couldn't initialize the lexer.
      fprintf(stderr, "[Error] SQLParser: Error when initializing lexer!\n");
      return false;
    }

    state = hsql__scan_string(text, scanner);

    // Parse the tokens.
    // If parsing fails, the result will contain an error object.
    hsql_parse(result, scanner);

    hsql__delete_buffer(state, scanner);
    hsql_lex_destroy(scanner);

    return true;
  }

  // static
  bool SQLParser::parseSQLString(const std::string& text, SQLParserResult* result) {
    return parseSQLString(text.c_str(), result);
  }

  // static
  SQLParserResult* SQLParser::parseSQLString(const char* text) {
    SQLParserResult* result = new SQLParserResult();

    if (!SQLParser::parseSQLString(text, result)) {
      delete result;
      return NULL;
    }

    return result;
  }

  // static
  SQLParserResult* SQLParser::parseSQLString(const std::string& text) {
    return parseSQLString(text.c_str());
  }

} // namespace hsql
