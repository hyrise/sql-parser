#ifndef __TABLEREF_H__
#define __TABLEREF_H__

#include "Expr.h"
#include <stdio.h>
#include <vector>

namespace hsql {

  struct SelectStatement;
  struct JoinDefinition;
  struct TableRef;

  // Possible table reference types.
  enum TableRefType {
    kTableName,
    kTableSelect,
    kTableJoin,
    kTableCrossProduct
  };

  // Holds reference to tables. Can be either table names or a select statement.
  struct TableRef {
    TableRef(TableRefType type);
    virtual ~TableRef();

    TableRefType type;

    char* schema;
    char* name;
    char* alias;

    SelectStatement* select;
    std::vector<TableRef*>* list;
    JoinDefinition* join;

    // Returns true if a schema is set.
    bool hasSchema();

    // Returns the alias, if it is set. Otherwise the name.
    char* getName();
  };

  // Possible types of joins.
  enum JoinType {
    kJoinInner,
    kJoinOuter,
    kJoinLeft,
    kJoinRight,
    kJoinLeftOuter,
    kJoinRightOuter,
    kJoinCross,
    kJoinNatural
  };

  // Definition of a join construct.
  struct JoinDefinition {
    JoinDefinition();
    virtual ~JoinDefinition();

    TableRef* left;
    TableRef* right;
    Expr* condition;

    JoinType type;
  };

} // namespace hsql
#endif
