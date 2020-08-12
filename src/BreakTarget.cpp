#include "../include/BreakTarget.h"
#include <bits/stdc++.h>

BreakTarget::BreakTarget(int arow, int acol) : 
Statement(arow, acol),
stackHeight(INT_MIN)
{}

Visitor* BreakTarget::accept(Visitor* v){
    return v->visitBreakTarget(this);
}