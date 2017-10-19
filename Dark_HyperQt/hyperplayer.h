#ifndef HYPERPLAYER_H
#define HYPERPLAYER_H

#include <cassert>
#include <vector>

#include "hypersquare.h"
#include "enum_classes.h"

class hyperplayer
{
    std::vector <int> m_posit;
    std::vector <int> m_forward;
    std::vector <int> m_rightward;
    std::vector <int> m_backward;
    std::vector <int> m_leftward;
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

    void move_forward()
    { add_direct(m_posit, m_forward); }

    void move_rightward()
    { add_direct(m_posit, m_rightward); }

    void move_backward()
    { add_direct(m_posit, m_backward); }

    void move_leftward()
    { add_direct(m_posit, m_leftward); }

    void turn_right();

    void turn_left();

};

#endif // HYPERPLAYER_H
