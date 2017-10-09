#include "hyperplayer.h"

hyperplayer::hyperplayer(const std::vector<int> &posit)
    : m_posit(),
      m_orient({1, -1}),
      m_up({0, -1}),
      m_color(hypercolor::chroma),
      m_innersquare({-1, -1})
{
    assert(posit.size() == 2);
    m_posit = posit;

    assert(m_orient.size() == 2);
    assert(m_up.size() == 2);
}

hyperplayer::~hyperplayer()
{ }

<<<<<<< HEAD
void hyperplayer::move_up()
{
    m_posit[0] += m_up[0];
    m_posit[1] += m_up[1];
}
=======
>>>>>>> 849222a31b6ec5b35424255a7e0a0015caed77e1
