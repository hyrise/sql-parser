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

In March 2015 we've also written a short paper outlining discussing some development details and the integration into our database Hyrise. You can find the paper [here](http://torpedro.com/paper/HyriseSQL-03-2015.pdf).


### General Usage

**Prerequisites:**
* [bison](https://www.gnu.org/software/bison/) (tested with v3.0.2)
* [flex](http://flex.sourceforge.net/) (tested with v2.5.5)

The parser library code is created in `build/`. To create the full parser code run 
```
make build
````

   
To use the SQL Parser in your own code, you need to include `SQLParser.h` and build+link all the source files from the parser within your project. See [`hyrise/src/lib/access/sql/SQLQueryParser.cpp`](https://github.com/hyrise/hyrise/blob/master/src/lib/access/sql/SQLQueryParser.cpp) for how it's used in Hyrise.

**Important:** Run tests and add tests for new features.
```
make test
```

### Contributers

The following people contributed to HYRISE sql-parser in various forms.

* Pedro Flemming ([@torpedro](https://github.com/torpedro))
* David Schwalb ([@schwald](https://github.com/schwald))


#### How to contribute

We strongly encourage you to contribute to this project! If you want to contribute to this project there are several options. If you've noticed a bug or would like an improvement let us know by creating a [new issue](https://github.com/hyrise/sql-parser/issues). If you want to develop a new feature yourself or just improve the quality of the system, feel free to fork the reposistory and implement your changes. Open a pull request as soon as your done and we will look over it. If we think it's good then your pull request will be merged into this repository.


### License

HYRISE sql-parser is licensed as open source after the OpenSource "Licence of the Hasso-Plattner Institute" declared in the LICENSE file of this project.
