#ifndef HYPERLEVEL_H
#define HYPERLEVEL_H

#include <cassert>
#include <vector>

#include "hypersquare.h"


class hyperlevel
{
    const int m_level;
    const int m_size;
    std::vector <std::vector <int>> m_squares;

public:
    hyperlevel(const int level);
};

#endif // HYPERLEVEL_H
