SQL Parser (C++)
==========

This is a SQL Parser for C++. It parses the given SQL query into C++ objects.
It is developed for integration in hyrise (https://github.com/hyrise/hyrise), but can be used in other environments as well.

### General Usage

**Prerequisites:**
* bison (https://www.gnu.org/software/bison/)
* flex (http://flex.sourceforge.net/)

To create the full parser code run `make build`. The parser library code is created in `build/`.

To use the SQL Parser in your own code, you only need to include `SQLParser.h` and build+link all the source files from the parser with your project. See `hyrise/src/lib/access/sql/SQLQueryParser.cpp` for how it's used in Hyrise.

### Update in Hyrise

Run `./deploy_to_hyris.sh path/to/hyrise` to update the SQL parser within Hyrise.

### Capabilities (Can and Can't do)

**Can**
 * Single select statements
 * Join expressions
 * Create tables
 * Insert statements
 * Delete/Truncate statements

**Can't (yet)**
 * Having clause
 * Update statements
 * Union clauses
 * Create anything other than tables
 * Alter/Rename statements
