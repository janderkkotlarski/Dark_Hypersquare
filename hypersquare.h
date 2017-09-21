#ifndef HYPERSQUARE_H
#define HYPERSQUARE_H

#include <cassert>
#include <vector>

#include "enum_classes.h"
#include "functions.h"
#include "textout.h"
#include "fibran.h"

class hypersquare
{
    std::vector <int> m_posit;
    hypertype m_type;
    hypercolor m_color;

public:
    hypersquare(const std::vector<int> &posit);

    hypersquare(const std::vector<int> &posit,
                const std::vector<unsigned> &type_chances,
                fibran &ranfib);

    hypersquare(const std::vector<int> &posit,
                const bool luck,
                fibran &ranfib);

    hypersquare(const std::vector<int> &posit,
                const hypertype &type,
                const hypercolor &color);

    ~hypersquare();

    std::vector <int> get_posit() noexcept
    { return m_posit; }

    hypertype get_type() noexcept
    { return m_type; }

    hypercolor get_color() noexcept
    { return m_color; }

    void set_posit(const std::vector<int> &posit);

    void set_type(const hypertype &type)
    { m_type = type; }

    void set_color(const hypercolor &color)
    { m_color = color; }
};

#endif // HYPERSQUARE_H
