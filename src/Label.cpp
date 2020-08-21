#include "Label.h"

Label::Label(int arow, int acol) : 
Statement(arow, acol),
enclosingSwitch(nullptr)
{}

Exp* Label::labelValue(){
    return nullptr;
}

Visitor* Label::accept(Visitor* v){
    return v->visitLabel(this);
}