C++ SQL Parser for Hyrise
=========================

This is a SQL Parser for C++. It parses the given SQL query into C++ objects.
It is developed for integration in hyrise (https://github.com/hyrise/hyrise), but can be used in other environments as well.

### Links

* [General Usage](#general-usage)
* [License](#license)
* [Contributers](#contributers)
* [Working Syntax Examples](docs/syntax.md)
* [Known Issues](docs/issues.md)
* [Developer Documentation](docs/documentation.md)
* [Integration in Hyrise](docs/integration.md)

### General Usage

**Prerequisites:**
* [bison](https://www.gnu.org/software/bison/) (tested with v3.0.2)
* [flex](http://flex.sourceforge.net/) (tested with v2.5.5)

The parser library code is created in `build/`. To create the full parser code run 
```
make build
````
   

To use the SQL Parser in your own code, you only need to include `SQLParser.h` and build+link all the source files from the parser with your project. See [`hyrise/src/lib/access/sql/SQLQueryParser.cpp`](https://github.com/hyrise/hyrise/blob/master/src/lib/access/sql/SQLQueryParser.cpp) for how it's used in Hyrise.

**Important:** Run tests and add tests for new features.
```
make test
```


### Contributers

The following people contributed to HYRISE sql-parser in various forms.

* Pedro Flemming ([@torpedro](https://github.com/torpedro))
* David Schwalb ([@schwald](https://github.com/schwald))

### License

HYRISE sql-parser is licensed as open source after the OpenSource "Licence of the Hasso-Plattner Institute" declared in the LICENSE file of this project.
