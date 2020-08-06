#include "../include/True.h"

True::True() :
Exp()
{}

Visitor* True::accept(Visitor* v){
    return v->visitTrue(this);
}