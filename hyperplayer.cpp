#include "hyperplayer.h"

hyperplayer::hyperplayer(const std::vector<int> &posit)
    : m_posit(),
      m_innersquare({-1, -1})
{
    assert(posit.size() == 2);
    m_posit = posit;
}


hyperplayer::~hyperplayer()
{ }
