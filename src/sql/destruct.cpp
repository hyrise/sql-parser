
#include "Table.h"
#include "SelectStatement.h"

namespace hsql {


    TableRef::~TableRef() {
        free(name);
        free(alias);
        delete select;
        if(list) {
            while(!list->empty()) {
                delete list->back();
                list->pop_back();
            }
            delete list;
        }
    }


} // namespace hsql
