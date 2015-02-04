C++ SQL Parser for Hyrise
=========================

This is a SQL Parser for C++. It parses the given SQL query into C++ objects.
It is developed for integration in hyrise (https://github.com/hyrise/hyrise), but can be used in other environments as well.

### General Usage

**Prerequisites:**
* bison (https://www.gnu.org/software/bison/)
* flex (http://flex.sourceforge.net/)

To create the full parser code run `make build`. The parser library code is created in `build/`.

To use the SQL Parser in your own code, you only need to include `SQLParser.h` and build+link all the source files from the parser with your project. See [`hyrise/src/lib/access/sql/SQLQueryParser.cpp`](https://github.com/hyrise/hyrise/blob/master/src/lib/access/sql/SQLQueryParser.cpp) for how it's used in Hyrise.

**Important:** Execute all tests by calling `make test`.

### Documentation

* [Working Syntax Examples](docs/syntax.md)
* [Developer Documentation](docs/documentation.md)
* [Integration in Hyrise](docs/integration.md)
* [Known Issues](docs/issues.md)

**Doxygen:**

Run `make docs` to create the doxygen documentation.
