#include "charamaze.h"

#include <cassert>

#include <dhs_functions.h>

charamaze::charamaze()
  : m_chaze(), m_size_default(101)
{ character_maze_generator(); }

charamaze::charamaze(const int size)
  : m_chaze(), m_size_default(size)
{ character_maze_generator(); }

charamaze::charamaze(const char character)
  : m_chaze(), m_size_default(101)
{ character_maze_generator(character); }

charamaze::charamaze(const char character, const int size)
  : m_chaze(), m_size_default(size)
{ character_maze_generator(character); }

void charamaze::character_maze_generator()
{ character_maze_generator(' '); }

void charamaze::character_maze_generator(const char character)
{
  assert(m_chaze.size() == 0);

  for (int i{ 0 }; i < m_size_default; ++i)
  {
    std::vector <char> row;

    for (int j{ 0 }; j < m_size_default; ++j)
    { row.push_back(character); }

    m_chaze.push_back(row);
  }

  assert(m_chaze.size() == unsigner(m_size_default));
  assert(m_chaze[0].size() == unsigner(m_size_default));
}
