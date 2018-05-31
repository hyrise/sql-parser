C++ SQL Parser
=========================
[![GitHub release](https://img.shields.io/github/release/hyrise/sql-parser.svg?maxAge=2592000)]()
[![Build Status](https://img.shields.io/travis/hyrise/sql-parser.svg?maxAge=2592000)](https://travis-ci.org/hyrise/sql-parser)


This is a SQL Parser for C++. It parses the given SQL query into C++ objects.
It has been developed for integration in [Hyrise](https://github.com/hyrise/hyrise), but can be used perfectly well in other environments as well.

In March 2015 we've also written a short paper outlining discussing some development details and the integration into our database Hyrise. You can find the paper [here](http://torpedro.com/paper/HyriseSQL-03-2015.pdf).


## Usage

**Note:** You can also find a detailed usage description at this [blog post](http://torpedro.github.io/tech/c++/sql/parser/2016/02/27/c++-sql-parser.html).

**Requirements:**
 * gcc 4.8+ (or clang 3.4+)

To use the SQL parser in your own projects you simply have to follow these few steps. The only requirement for is gcc 4.8+. Older versions of gcc/clang might also work, but are untested.

 1. Download the [latest release here](https://github.com/hyrise/sql-parser/releases)
 2. Compile the library `make` to create `libsqlparser.so`
 3. *(Optional, Recommended)* Run `make install` to copy the library to `/usr/local/lib/`
 4. Run the tests `make test` to make sure everything worked
 5. Include the `SQLParser.h` from `src/` (or from `/usr/local/lib/hsql/` if you installed it) and link the library in your project
 6. Take a look at the [example project here](https://github.com/hyrise/sql-parser/tree/master/example)

```cpp
#include "hsql/SQLParser.h"

/* ... */

{
    // Basic Usage Example

    const std::string query = "...";
    hsql::SQLParserResult result;
    hsql::SQLParser::parse(query, &result);

    if (result.isValid() && result.size() > 0) {
        const hsql::SQLStatement* statement = result.getStatement(0);

        if (statement.isType(hsql::SelectStatement)) {
            const hsql::SelectStatement* select = (const hsql::SelectStatement*) statement;
            /* ... */
        }
    }
}
```

Quick Links:

 * [SQLParser.h](src/SQLParser.h)
 * [SQLParserResult.h](src/SQLParserResult.h)
 * [SelectStatement.h](src/sql/SelectStatement.h)

## How to Contribute

**[Developer Documentation](docs/)**

We strongly encourage you to contribute to this project! If you want to contribute to this project there are several options. If you've noticed a bug or would like an improvement let us know by creating a [new issue](https://github.com/hyrise/sql-parser/issues). If you want to develop a new feature yourself or just improve the quality of the system, feel free to fork the reposistory and implement your changes. Open a pull request as soon as your done and we will look over it. If we think it's good then your pull request will be merged into this repository.


## License

HYRISE sql-parser is licensed as open source after the MIT License which is declared in the LICENSE file of this project.


## Contributers

The following people contributed to HYRISE sql-parser in various forms.

* Pedro Flemming ([@torpedro](https://github.com/torpedro))
* David Schwalb ([@schwald](https://github.com/schwald))
