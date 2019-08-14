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

  hypermaze(const int level,
            const int world);

  void construct_empty_maze();

  void generate_concrete_maze();

  void construct_horizontal_line(const square_type st,
                                 const int verti_pos);

  void construct_vertical_line(const square_type st,
                               const int hori_pos);

  void generate_random_walls(const square_type st,
                             const float fraction,
                             const int free_size);

  void put_player();

  void text_display_square_types();

private:
  std::vector <std::vector <hypersquare>> m_maze;
  const int m_size;
  const int m_half;
  const int m_level;
  const int m_world;
};

#endif // HYPERMAZE_H
