#ifndef WEKTOR_H
#define WEKTOR_H

#include <cassert>
#include <iostream>
#include <string>

class wektor
{
    int m_x;
    int m_y;

public:

    wektor();

    wektor(const int x,
           const int y);

    wektor(wektor &wek);

    ~wektor();

    int get_x() noexcept
    { return m_x; }

    int get_y() noexcept
    { return m_y; }

    void set_xy(const int x,
                const int y) noexcept;

    wektor operator+ (wektor &wek) noexcept;

    wektor operator- (wektor &wek) noexcept;

    void operator+= (wektor &wek) noexcept;

    void operator-= (wektor &wek) noexcept;

    void out() noexcept
    { std::cout << "[" << m_x << ":" << m_y << "]\n"; }
};

#endif // WEKTOR_H
