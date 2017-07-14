#ifndef MADRIX_H
#define MADRIX_H

#include <cassert>
#include <iostream>
#include <string>

class madrix
{
    int m_a;
    int m_b;
    int m_c;
    int m_d;

public:

    madrix();

    madrix(const int a, const int b,
           const int c, const int d);

    int get_a() const noexcept
    { return m_a; }

    int get_b() const noexcept
    { return m_b; }

    int get_c() const noexcept
    { return m_c; }

    int get_d() const noexcept
    { return m_d; }

    void set_abcd(const int a, const int b,
                  const int c, const int d) noexcept;

    void operator+= (const madrix &wek) noexcept;
    void operator-= (const madrix &wek) noexcept;

};

madrix operator+(const madrix &lhs, const madrix &rhs) noexcept;
madrix operator-(const madrix &lhs, const madrix &rhs) noexcept;

madrix operator*(const madrix &lhs, const int rhs) noexcept;
madrix operator*(const int lhs, const madrix &rhs) noexcept;

#endif // MADRIX_H
