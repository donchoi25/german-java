#include "../include/BinExp.h"

BinExp::BinExp(Exp* aleft, Exp* aright):Exp(), 
                                        left(aleft),
                                        right(aright)
{}

Visitor* BinExp::accept(Visitor* v){
    return v->visitBinExp(this);
}