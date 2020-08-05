#ifndef DEFAULT_H
#define DEFAULT_H

#include "Label.h"
#include "Visitor.h"

class Default : public Label{
public:
    Default();

    virtual Visitor* accept(Visitor* v);
};

#endif