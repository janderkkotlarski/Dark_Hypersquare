#ifndef CHARAMAZE_H
#define CHARAMAZE_H

#include <vector>

class charamaze
{
public:
  charamaze();
  charamaze(const int size);
  charamaze(const char character);
  charamaze(const char character, const int size);

private:
  std::vector <std::vector <char>> m_chaze;

  const int m_size_default;

  void character_maze_generator();

  void character_maze_generator(const char character);
};

#endif // CHARAMAZE_H
