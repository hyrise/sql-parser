#include <string>
#include "SQLParser.h"

using namespace hsql;

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
    std::string input(reinterpret_cast<const char*>(data), size);
    SQLParserResult res;
    SQLParser::parse(input, &res);
    return 0;
}
