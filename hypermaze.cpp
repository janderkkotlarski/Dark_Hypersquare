#include "hypermaze.h"

#include <cassert>
#include <iostream>
#include <cmath>

#include "dhs_functions.h"

hypermaze::hypermaze(const int size,
                     const int level,
                     const int world)
  : m_maze(),
    m_size(size - 1),
    m_half(m_size/2),
    m_level(level),
    m_world(world)
{  
  assert(m_size > 0);
  assert(m_size % 2 == 0);
  assert(m_level >= 0);
  assert(m_world >= 0);

  construct_empty_maze();
}

hypermaze::hypermaze(const int level,
                     const int world)
  : m_maze(),
    m_size(2*level),
    m_half(m_size/2),
    m_level(level),
    m_world(world)
{
  assert(m_size > 0);
  assert(m_size % 2 == 0);
  assert(m_level >= 0);
  assert(m_world >= 0);

  construct_empty_maze();
}

void hypermaze::construct_empty_maze()
{
  assert(m_maze.size() == 0);

  for (int i{ 0 }; i <= m_size; ++i)
  {
    std::vector <hypersquare> column;

    for (int j{ 0 }; j <= m_size; ++j)
    { column.push_back(hypersquare(int_2d(i, j))); }

    m_maze.push_back(column);
  }

  assert(m_maze.size() == unsigner(m_size + 1));
  assert(m_maze[0].size() == unsigner(m_size + 1));
}

void hypermaze::generate_concrete_maze()
{
  for (int i{ 0 }; i <= m_size; ++i)
  {
    for (int j{ 0 }; j <= m_size; ++j)
    {
      if ((abs(i - m_half) % 2 == 1) && (abs(j - m_half) % 2 == 1))
      { m_maze[unsigner(i)][unsigner(j)].set_st(square_type::concrete); }
    }
  }
}

void hypermaze::construct_horizontal_line(const square_type st)
{
  for (int i{ 0 }; i <= m_size; ++i)
  {
    m_maze[unsigner(i)][unsigner(m_half)].set_st(st);
  }
}

void hypermaze::generate_random_walls(const square_type st,
                                      const float fraction,
                                      const int free_size)
{
  for (int i{ 0 }; i <= m_size; ++i)
  {
    for (int j{ 0 }; j <= m_size; ++j)
    {
      if ((((abs(i - m_half) % 2 == 0) && (abs(j - m_half) % 2 == 1)) ||
          ((abs(i - m_half) % 2 == 1) && (abs(j - m_half) % 2 == 0))) &&
          ((abs(i - m_half) > free_size) ||
           (abs(j - m_half) > free_size)))
      { m_maze[unsigner(i)][unsigner(j)].set_st(random_wall(st, fraction)); }
    }
  }
}



void hypermaze::put_player()
{ m_maze[unsigner(m_size/2)][unsigner(m_size/2)].set_st(square_type::clone); }

void hypermaze::text_display_square_types()
{
  for (int j{ 0 }; j <= m_size; ++j)
  {
    for (int i{ 0 }; i <= m_size; ++i)
    { m_maze[unsigner(i)][unsigner(j)].text_display_square_type(); }

    std::cout << '\n';
  }
}
