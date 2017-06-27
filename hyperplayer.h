#ifndef HYPERPLAYER_H
#define HYPERPLAYER_H

#include <cassert>
#include <vector>

#include "hypersquare.h"

class hyperplayer
{
    std::vector <int> m_posit;
    std::vector <int> m_orient;
    hypersquare m_innersquare;

public:

    hyperplayer(const std::vector <int> &posit);
    ~hyperplayer();

    std::vector <int> get_posit() noexcept
    { return m_posit; }

    hypertype get_innertype() noexcept
    { return m_innersquare.get_type(); }

    hypercolor get_innercolor() noexcept
    { return m_innersquare.get_color(); }


};

#endif // HYPERPLAYER_H
