#ifndef HYPERPLAYER_H
#define HYPERPLAYER_H

#include <cassert>
#include <vector>

#include "hypersquare.h"

class hyperplayer
{
    std::vector <int> m_posit;
    hypersquare m_innersquare;

public:

    hyperplayer(const std::vector <int> &posit);
    ~hyperplayer();
};

#endif // HYPERPLAYER_H
