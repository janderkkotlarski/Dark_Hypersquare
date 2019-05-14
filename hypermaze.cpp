#include "hypermaze.h"

#include <cassert>
#include <iostream>
#include <cmath>

#include "dhs_functions.h"

hypermaze::hypermaze(const int size,
                     const int level,
                     const int world)
  : m_squares(), m_size(size - 1), m_level(level), m_world(world)
{
  assert(m_size > 0);
  assert(m_size % 2 == 0);
  assert(m_level >= 0);
  assert(m_world >= 0);

  for (int i{ 0 }; i <= m_size; ++i)
  {
    std::vector <hypersquare> column;

    for (int j{ 0 }; j <= m_size; ++j)
    { column.push_back(hypersquare(int_2d(i, j))); }

    m_squares.push_back(column);
  }

  assert(m_squares.size() == unsigner(m_size + 1));
  assert(m_squares[0].size() == unsigner(m_size + 1));
}

void hypermaze::generate_concrete_maze()
{
  const int half{ m_size/2 };

  for (int i{ 0 }; i <= m_size; ++i)
  {
    for (int j{ 0 }; j <= m_size; ++j)
    {
      if ((abs(i - half) % 2 == 1) &&
          (abs(j - half) % 2 == 1))
      { m_squares[unsigner(i)][unsigner(j)].set_st(square_type::concrete); }
    }
  }
}

void hypermaze::put_player()
{ m_squares[unsigner(m_size/2)][unsigner(m_size/2)].set_st(square_type::clone); }

void hypermaze::text_display_square_types()
{
  for (int j{ 0 }; j <= m_size; ++j)
  {
    for (int i{ 0 }; i <= m_size; ++i)
    { m_squares[unsigner(i)][unsigner(j)].text_display_square_type(); }

    std::cout << '\n';
  }
}
