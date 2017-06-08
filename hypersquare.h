#ifndef HYPERSQUARE_H
#define HYPERSQUARE_H

#include <cassert>
#include <vector>

#include "enum_classes.h"


class hypersquare
{
    std::vector <int> m_posit;
    hypertype m_type;
    hypercolor m_color;

public:
    hypersquare(const std::vector<int> &posit);

};

#endif // HYPERSQUARE_H
