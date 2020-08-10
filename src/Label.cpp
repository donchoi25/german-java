#include "../include/Label.h"

Label::Label() : Statement(),
                 enclosingSwitch(nullptr)
{}

Visitor* accept(Visitor* v){
    return v->visitLabel(this);
}