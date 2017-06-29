#include "wektor.h"

wektor::wektor(const int x,
               const int y)
    : m_x(x),
      m_y(y)
{ }

wektor::wektor(wektor &wek)
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

wektor wektor::operator+ (wektor &wek) noexcept
{
    const int x_add
    { get_x() + wek.get_x() };

    const int y_add
    { get_y() + wek.get_y() };

    wektor wek_temp(x_add, y_add);
    return wek_temp;
}

wektor wektor::operator- (wektor &wek) noexcept
{
    const int x_min
    { get_x() - wek.get_x() };

    const int y_min
    { get_y() - wek.get_y() };

    wektor wek_temp(x_min, y_min);
    return wek_temp;
}

void wektor::operator+= (wektor &wek) noexcept
{
    const int x_add
    { get_x() + wek.get_x() };

    const int y_add
    { get_y() + wek.get_y() };

    set_xy(x_add, y_add);
}
