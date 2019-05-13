#ifndef PLAY_LEVEL_H
#define PLAY_LEVEL_H

#include "hypermaze.h"

class play_level
{
public:
  play_level(hypermaze& maze);
private:
  hypermaze m_maze;
};

#endif // PLAY_LEVEL_H
