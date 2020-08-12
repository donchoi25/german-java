#include "../include/BinExp.h"

BinExp::BinExp(int arow, int acol, Exp* aleft, Exp* aright):
Exp(arow, acol), 
left(aleft),
right(aright)
{}

Visitor* BinExp::accept(Visitor* v){
    return v->visitBinExp(this);
}