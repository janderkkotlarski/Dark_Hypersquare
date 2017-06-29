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

wektor wektor::operator+ (wektor &wek) noexcept
{
    const int x_temp
    { wek.get_x() };

    wektor wek_temp(x_temp,
                    x_temp);
    return wek_temp;
}
