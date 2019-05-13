#ifndef HYPERMAZE_H
#define HYPERMAZE_H

#include <vector>

#include "hypersquare.h"

class hypermaze
{
public:
  hypermaze(const int size,
            const int level,
            const int world);



private:
  std::vector <std::vector <hypersquare>> m_squares;
  const int m_size;
  const int m_level;
  const int m_world;
};

#endif // HYPERMAZE_H
