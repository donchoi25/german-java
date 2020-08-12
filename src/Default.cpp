#include "../include/Default.h"

Default::Default(int arow, int acol) : 
Label(arow, acol)
{}

Visitor* Default::accept(Visitor* v){
    return v->visitDefault(this);
}