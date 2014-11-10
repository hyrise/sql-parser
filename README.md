SQL Parser (C++)
==========

This is a SQL Parser for C++. It parses the given SQL query into C++ objects.
It is developed for integration in hyrise (https://github.com/hyrise/hyrise), but can be used in other environments as well.

### General Usage

**Prerequisites:**
* bison (https://www.gnu.org/software/bison/)
* flex (http://flex.sourceforge.net/)

To create the full parser code run `make build`. The parser library code is created in `build/`.

To use the SQL Parser in your own code, you only need to include `SQLParser.h` and build+link all the source files from the parser with your project.

### Usage in Hyrise

To build a new version of the sql parser and include it in hyrise you have to run `make build` and copy all contents of `build/` to `hyrise/src/lib/access/sql/parser/` and run rebuild Hyrise with `make` within the hyrise directory.

If you have changed some API keywords than you might have to adjust the Hyrise source files accordingly.

### Language Progress Overview

See [Wiki](https://github.com/hyrise/sql-parser/wiki#currently-supported-and-planned-sql-features)
  
