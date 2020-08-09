#include "../include/VarDecl.h"

VarDecl::VarDecl(Type* atype, const std::string aname) : Decl(aname),
                                                   type(atype),
                                                   offset(0)
{}