#include "../include/Label.h"

Label::Label() : Statement(),
                 enclosingSwitch(nullptr)
{}

Visitor* Label::accept(Visitor* v){
    return v->visitLabel(this);
}