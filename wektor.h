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

    wektor(const wektor &wek);

    ~wektor();

    int get_x() const noexcept
    { return m_x; }

    int get_y() const noexcept
    { return m_y; }

    void set_xy(const int x,
                const int y) noexcept;

    void operator+= (wektor &wek) noexcept;

    void operator-= (wektor &wek) noexcept;

    void out() noexcept
    { std::cout << "[" << m_x << ":" << m_y << "]\n"; }
};

wektor operator+(const wektor &lhs, const wektor& rhs) noexcept;
wektor operator-(const wektor &lhs, const wektor& rhs) noexcept;

int abs_sqr(const wektor &wek)
{ return  wek.get_x()*wek.get_x() + wek.get_y()*wek.get_y(); }



#endif // WEKTOR_H
