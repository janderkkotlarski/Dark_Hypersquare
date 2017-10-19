#include "hyperplayer.h"

hyperplayer::hyperplayer(const std::vector<int> &posit)
    : m_posit(),
      m_forward({0, -1}),
      m_rightward({1, 0}),
      m_backward({0, 1}),
      m_leftward({-1, 0}),
      m_color(hypercolor::chroma),
      m_innersquare({-1, -1})
{
    assert(posit.size() == 2);
    m_posit = posit;

    assert(m_forward.size() == 2);
}

hyperplayer::~hyperplayer()
{ }

void hyperplayer::turn_right()
{
    rotate_right(m_forward);
    rotate_right(m_rightward);
    rotate_right(m_backward);
    rotate_right(m_leftward);
}

void hyperplayer::turn_left()
{
    rotate_left(m_forward);
    rotate_left(m_rightward);
    rotate_left(m_backward);
    rotate_left(m_leftward);
}
