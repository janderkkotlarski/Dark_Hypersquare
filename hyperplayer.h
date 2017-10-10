#ifndef HYPERPLAYER_H
#define HYPERPLAYER_H

#include <cassert>
#include <vector>

#include "hypersquare.h"
#include "enum_classes.h"

class hyperplayer
{
    std::vector <int> m_posit;
    std::vector <int> m_orient;
    std::vector <int> m_forward;
    hypercolor m_color;
    hypersquare m_innersquare;

public:

    hyperplayer(const std::vector <int> &posit);
    ~hyperplayer();

    std::vector <int> get_posit() noexcept
    { return m_posit; }

    hypercolor get_color() noexcept
    { return m_color; }

    hypertype get_innertype() noexcept
    { return m_innersquare.get_type(); }

    hypercolor get_innercolor() noexcept
    { return m_innersquare.get_color(); }

    void move_forward();


};

#endif // HYPERPLAYER_H
