#include "wektor.h"

wektor::wektor()
    : m_x(0),
      m_y(0)
{ }

wektor::wektor(const int x,
               const int y)
    : m_x(x),
      m_y(y)
{ }

wektor::wektor(const wektor &wek)
    : m_x(wek.get_x()),
      m_y(wek.get_y())
{ }

wektor::~wektor()
{ }

void wektor::set_xy(const int x,
                    const int y) noexcept
{
    m_x = x;
    m_y = y;
}

void wektor::operator+= (const wektor &wek) noexcept
{
    const int x_add
    { get_x() + wek.get_x() };

    const int y_add
    { get_y() + wek.get_y() };

    set_xy(x_add, y_add);
}

void wektor::operator-= (const wektor &wek) noexcept
{
    const int x_min
    { get_x() - wek.get_x() };

    const int y_min
    { get_y() - wek.get_y() };

    set_xy(x_min, y_min);
}

wektor operator+ (const wektor &lhs, const wektor& rhs) noexcept
{
    return wektor(lhs.get_x() + rhs.get_x(),
                  lhs.get_y() + rhs.get_y());
}

wektor operator- (const wektor &lhs, const wektor& rhs) noexcept
{
    return wektor(lhs.get_x() - rhs.get_x(),
                  lhs.get_y() - rhs.get_y());
}

int abs_sqr(const wektor &wek) noexcept
{ return  wek.get_x()*wek.get_x() + wek.get_y()*wek.get_y(); }
