#include "invalidindex.h"

Invalidindex:: Invalidindex(int index)
:index_(index)
{
}

int Invalidindex:: invalid() const
{
    return this->index_;
}
