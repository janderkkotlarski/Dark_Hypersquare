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

    wektor(const wektor &rhs);

    ~wektor();

    int get_x() const noexcept
    { return m_x; }

    int get_y() const noexcept
    { return m_y; }

    void set_xy(const int x,
                const int y) noexcept;

    void operator+=(const wektor &rhs) noexcept;
    void operator-=(const wektor &rhs) noexcept;

    void operator*=(const int rhs) noexcept;

    void out() noexcept
    { std::cout << "[" << m_x << ":" << m_y << "]\n"; }
};

wektor operator+(const wektor &lhs, const wektor& rhs) noexcept;
wektor operator+(const wektor& rhs) noexcept;

wektor operator-(const wektor &lhs, const wektor& rhs) noexcept;
wektor operator-(const wektor& rhs) noexcept;

wektor operator*(const wektor &lhs, const int rhs) noexcept;
wektor operator*(const int lhs, const wektor &rhs) noexcept;

int in_product(const wektor &lhs, const wektor &rhs) noexcept;

#endif // WEKTOR_H
