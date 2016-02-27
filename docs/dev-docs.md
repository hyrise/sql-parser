Developer Documentation
=======================

## Developing New Functionality

This section contains information about how to extend this parser with new functionalities.


### Implementing a new Statement

Create a new file and class in `src/sql/` or extend any of the existing Statements. Every statement needs to have the base class SQLStatement and needs to call its super constructor with its type. If your defining a new statement type, you need to define a new StatementType in `SQLStatement.h`.

It is important that you create an appropriate constructor for your statement that zero-initializes all its pointer variables and that your create an appropriate destructor.

Finally you will need to include your new file in `src/sql/statements.h`.


### Extending the Grammar

Related files:
````
src/parser/bison_parser.y
src/parser/flex_lexer.l
src/parser/keywordlist_generator.py
src/parser/sql_keywords.txt
```

To extend the grammar the file you will mostly have to deal with is the bison grammar definition in `src/parser/bison_parser.y`.

If your extending an existing statement, skip to the non-terminal definition for that statement. I.e. for an InsertStatement the non-terminal insert_statement.

If your defining a new statement, you will need to define your type in the \%union directive `hsql::ExampleStatement example_stmt`. Next you need to associate this type with a non-terminal `\%type <example_stmt> example_statement`. Then you have to define the non-terminal `example_statement`. Look the other non-terminals for statements to figure out how.



## Implementing Tests

All test related files are in `test/`. Take a look to see how tests are implemented.


