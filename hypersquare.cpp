#include "hypersquare.h"

hypersquare::hypersquare(const int_2d& pos)
  : m_pos(pos), m_st(square_type::none), m_ct(color_type::none)
{}

hypersquare::hypersquare(const int_2d& pos,
                         const square_type st,
                         const color_type ct)
  : m_pos(pos), m_st(st), m_ct(ct)
{}

void hypersquare::text_display_square_type()
{
  text_display_st(m_st);
}
