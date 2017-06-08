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

    std::vector <int> get_posit() noexcept
    { return m_posit; }

    hypertype get_type() noexcept
    { return m_type; }

    hypercolor get_color() noexcept
    { return m_color; }
};

#endif // HYPERSQUARE_H
