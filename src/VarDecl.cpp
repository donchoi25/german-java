#include "../include/VarDecl.h"

VarDecl::VarDecl(Type* atype, std::string aname) : Decl(aname),
                                                   type(atype),
                                                   offset(0)
{}