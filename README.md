C++ SQL Parser for Hyrise
=========================
[![GitHub release](https://img.shields.io/github/release/hyrise/sql-parser.svg?maxAge=2592000)]()
[![Build Status](https://img.shields.io/travis/hyrise/sql-parser.svg?maxAge=2592000)](https://travis-ci.org/hyrise/sql-parser)


This is a SQL Parser for C++. It parses the given SQL query into C++ objects.
It is developed for integration in hyrise (https://github.com/hyrise/hyrise), but can be used in other environments as well.

In March 2015 we've also written a short paper outlining discussing some development details and the integration into our database Hyrise. You can find the paper [here](http://torpedro.com/paper/HyriseSQL-03-2015.pdf).


### Usage

**Note:** You can also find a detailed usage description at this [blog post](http://torpedro.github.io/tech/c++/sql/parser/2016/02/27/c++-sql-parser.html).

**Requirements:**
 * gcc 4.8+ (or clang 3.4+)

To use the SQL parser in your own projects you simply have to follow these few steps. The only requirement for is gcc 4.8+. Older versions of gcc/clang might also work, but are untested.

 1. Download the [latest release here](https://github.com/hyrise/sql-parser/releases)
 2. Compile the library `make` to create `libsqlparser.so`
 3. *(Optional)* Run `make install` to copy the library to `/usr/local/lib/`
 3. Run the tests `make test` to make sure everything worked
 4. Take a look at the [example project here](https://github.com/hyrise/sql-parser/tree/master/example)
 5. Include the `SQLParser.h` from `src/` and link the library in your project


### Extending the parser

**Requirements for development:**
 * gcc 4.8+ (or clang 3.4+)
 * [bison](https://www.gnu.org/software/bison/) (v3.0.2+)
 * [flex](http://flex.sourceforge.net/) (v2.5.5+)

First step to extending this parser is cloning the repository `git clone git@github.com:hyrise/sql-parser.git` and making sure everything works by running the following steps:

``` 
make parser   # builds the bison parser and flex lexer
make library  # builds the libsqlparser.so
make test     # runs the tests with the library
```

Rerun these steps whenever you change part of the parse. To execute the entire pipeline automatically you can run:

```
make cleanall  # cleans the parser build and library build
make test      # build parser, library and runs the tests
```


#### How to contribute

We strongly encourage you to contribute to this project! If you want to contribute to this project there are several options. If you've noticed a bug or would like an improvement let us know by creating a [new issue](https://github.com/hyrise/sql-parser/issues). If you want to develop a new feature yourself or just improve the quality of the system, feel free to fork the reposistory and implement your changes. Open a pull request as soon as your done and we will look over it. If we think it's good then your pull request will be merged into this repository.


### Resources

 * [Working Syntax Examples](docs/syntax.md)
 * [Developer Documentation](docs/dev-docs.md)


### License

HYRISE sql-parser is licensed as open source after the OpenSource "Licence of the Hasso-Plattner Institute" declared in the LICENSE file of this project.


### Contributers

The following people contributed to HYRISE sql-parser in various forms.

* Pedro Flemming ([@torpedro](https://github.com/torpedro))
* David Schwalb ([@schwald](https://github.com/schwald))
