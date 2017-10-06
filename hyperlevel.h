#ifndef HYPERLEVEL_H
#define HYPERLEVEL_H

#include <cassert>
#include <vector>

#include "hyperplayer.h"
#include "hypersquare.h"
#include "fibran.h"

class hyperlevel
{
    const int m_level;
    const int m_size;
    hyperplayer m_player;
    std::vector <std::vector <hypersquare>> m_squares;    

public:
    hyperlevel(const int level);

    hyperlevel(const int level,
               const std::vector<unsigned> &type_chances,
               fibran &ranfib);

    int get_level() noexcept
    { return m_level; }

    int get_size() noexcept
    { return m_size; }

    std::vector<int> get_player_pos() noexcept
    { return m_player.get_posit(); }

    void move_up()
    { return m_player.move_up(); }

    void textdisp();
};

#endif // HYPERLEVEL_H
