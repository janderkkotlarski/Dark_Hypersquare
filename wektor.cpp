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

wektor::wektor(const wektor &rhs)
    : m_x(rhs.get_x()),
      m_y(rhs.get_y())
{ }

wektor::~wektor()
{ }

void wektor::set_xy(const int x,
                    const int y) noexcept
{
    m_x = x;
    m_y = y;
}

void wektor::operator+=(const wektor &rhs) noexcept
{
    const int x_new
    { get_x() + rhs.get_x() };

    const int y_new
    { get_y() + rhs.get_y() };

    set_xy(x_new, y_new);
}

void wektor::operator-=(const wektor &rhs) noexcept
{
    const int x_new
    { get_x() - rhs.get_x() };

    const int y_new
    { get_y() - rhs.get_y() };

    set_xy(x_new, y_new);
}

void wektor::operator*=(const int rhs) noexcept
{
    const int x_new
    { get_x()*rhs };

    const int y_new
    { get_y()*rhs };

    set_xy(x_new, y_new);
}

wektor operator+(const wektor &lhs, const wektor& rhs) noexcept
{
    return wektor(lhs.get_x() + rhs.get_x(),
                  lhs.get_y() + rhs.get_y());
}

wektor operator+(const wektor& rhs) noexcept
{
    return wektor(rhs.get_x(),
                  rhs.get_y());
}

wektor operator-(const wektor &lhs, const wektor& rhs) noexcept
{
    return wektor(lhs.get_x() - rhs.get_x(),
                  lhs.get_y() - rhs.get_y());
}

wektor operator-(const wektor& rhs) noexcept
{
    return wektor(-rhs.get_x(),
                  -rhs.get_y());
}

wektor operator*(const wektor &lhs, const int rhs) noexcept
{
    return wektor(lhs.get_x()*rhs,
                  lhs.get_y()*rhs);
}

wektor operator*(const int lhs, const wektor &rhs) noexcept
{
    return wektor(lhs*rhs.get_x(),
                  lhs*rhs.get_y());
}

int in_product(const wektor &lhs, const wektor &rhs) noexcept
{ return lhs.get_x()*rhs.get_x() + lhs.get_y()*rhs.get_y(); }
