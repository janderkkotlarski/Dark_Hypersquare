#include "hypermaze.h"

#include <cassert>

hypermaze::hypermaze(const int size,
                     const int level,
                     const int world)
  : m_size(size), m_level(level), m_world(world)
{
  assert(m_size > 0);
  assert(m_level >= 0);
  assert(m_world >= 0);
}
