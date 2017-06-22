#ifndef HYPERLEVEL_H
#define HYPERLEVEL_H

#include <cassert>
#include <vector>

#include "hyperplayer.h"
#include "hypersquare.h"


class hyperlevel
{
    const int m_level;
    const int m_size;
    hyperplayer m_player;
    std::vector <std::vector <hypersquare>> m_squares;    

public:
    hyperlevel(const int level);
};

#endif // HYPERLEVEL_H
