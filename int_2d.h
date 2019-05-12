#ifndef INT_2D_H
#define INT_2D_H

class int_2d
{
public:
  int_2d();
  int_2d(const int x, const int y);

  int get_x() const noexcept
  { return m_x; }

  int get_y() const noexcept
  { return m_y; }

private:
  int m_x;
  int m_y;
};

#endif // INT_2D_H
