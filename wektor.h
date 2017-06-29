#ifndef WEKTOR_H
#define WEKTOR_H

#include <cassert>

class wektor
{
    int m_x;
    int m_y;

public:

    wektor(const int x,
           const int y);

    wektor(wektor &wek);

    ~wektor();

    int get_x() noexcept
    { return m_x; }

    int get_y() noexcept
    { return m_y; }

    wektor operator+ (wektor &wek) noexcept;

    wektor operator- (wektor &wek) noexcept;
};

#endif // WEKTOR_H
