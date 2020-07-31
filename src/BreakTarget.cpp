#include "../include/BreakTarget.h"
#include <bits/stdc++.h>

BreakTarget::BreakTarget() : Statement(),
                             stackHeight(INT_MIN)
{}

Visitor* BreakTarget::accept(Visitor* v){
    return v->visitBreakTarget(this);
}