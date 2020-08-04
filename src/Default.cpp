#include "../include/Default.h"

Default::Default() : Label()
{}

Visitor* Default::accept(Visitor* v){
    return v->visitDefault(this);
}