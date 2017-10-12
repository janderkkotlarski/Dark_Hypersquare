#include "hyperplayer.h"

hyperplayer::hyperplayer(const std::vector<int> &posit)
    : m_posit(),
      m_forward({0, -1}),
      m_color(hypercolor::chroma),
      m_innersquare({-1, -1})
{
    assert(posit.size() == 2);
    m_posit = posit;

    assert(m_forward.size() == 2);
}

hyperplayer::~hyperplayer()
{ }
