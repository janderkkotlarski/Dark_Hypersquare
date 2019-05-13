#ifndef HYPERSQUARE_H
#define HYPERSQUARE_H

#include "int_2d.h"
#include "square_type.h"
#include "color_type.h"

class hypersquare
{
public:
  hypersquare(const int_2d& pos);

  hypersquare(const int_2d& pos,
              const square_type st,
              const color_type ct);

  int_2d get_pos() const noexcept
  { return m_pos; }

  square_type get_st() const noexcept
  { return m_st; }

  color_type get_ct() const noexcept
  { return m_ct; }

private:
  int_2d m_pos;
  square_type m_st;
  color_type m_ct;
};

#endif // HYPERSQUARE_H
