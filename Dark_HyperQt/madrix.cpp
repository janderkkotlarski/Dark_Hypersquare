#include "madrix.h"

madrix::madrix()
    : m_a(1), m_b(0),
      m_c(0), m_d(1)
{ }

madrix::madrix(const int a,
               const int b,
               const int c,
               const int d)
    : m_a(a), m_b(b),
      m_c(c), m_d(d)
{ }

madrix::madrix(const madrix &rhs)
    : m_a(rhs.get_a()), m_b(rhs.get_b()),
      m_c(rhs.get_c()), m_d(rhs.get_d())
{ }

void madrix::set_abcd(const int a, const int b,
                      const int c, const int d) noexcept
{
    m_a = a;
    m_b = b;
    m_c = c;
    m_d = d;
}

void madrix::operator+= (const madrix &rhs) noexcept
{
    const int a_add
    { get_a() + rhs.get_a() };

    const int b_add
    { get_b() + rhs.get_b() };

    const int c_add
    { get_c() + rhs.get_c() };

    const int d_add
    { get_d() + rhs.get_d() };

    set_abcd(a_add, b_add, c_add, d_add);
}

void madrix::operator-= (const madrix &rhs) noexcept
{
    const int a_min
    { get_a() - rhs.get_a() };

    const int b_min
    { get_b() - rhs.get_b() };

    const int c_min
    { get_c() - rhs.get_c() };

    const int d_min
    { get_d() - rhs.get_d() };

    set_abcd(a_min, b_min, c_min, d_min);
}

void madrix::operator*= (const int rhs) noexcept
{
    const int a_mult
    { get_a()*rhs };

    const int b_mult
    { get_b()*rhs };

    const int c_mult
    { get_c()*rhs };

    const int d_mult
    { get_d()*rhs };

    set_abcd(a_mult, b_mult, c_mult, d_mult);
}

madrix operator+(const madrix &lhs, const madrix &rhs) noexcept
{
    return madrix(lhs.get_a() + rhs.get_a(), lhs.get_b() + rhs.get_b(),
                  lhs.get_c() + rhs.get_c(), lhs.get_d() + rhs.get_d());
}

madrix operator-(const madrix &lhs, const madrix &rhs) noexcept
{
    return madrix(lhs.get_a() - rhs.get_a(), lhs.get_b() - rhs.get_b(),
                  lhs.get_c() - rhs.get_c(), lhs.get_d() - rhs.get_d());
}

madrix operator*(const madrix &lhs, const int rhs) noexcept
{
    return madrix(lhs.get_a()*rhs, lhs.get_b()*rhs,
                  lhs.get_c()*rhs, lhs.get_d()*rhs);
}

madrix operator*(const int lhs, const madrix &rhs) noexcept
{
    return madrix(lhs*rhs.get_a(), lhs*rhs.get_b(),
                  lhs*rhs.get_c(), lhs*rhs.get_d());
}

madrix multiply(const madrix &lhs, const madrix &rhs) noexcept
{
    return madrix(lhs.get_a()*rhs.get_a() + lhs.get_b()*rhs.get_c(),
                  lhs.get_a()*rhs.get_b() + lhs.get_b()*rhs.get_d(),
                  lhs.get_c()*rhs.get_a() + lhs.get_d()*rhs.get_c(),
                  lhs.get_c()*rhs.get_b() + lhs.get_d()*rhs.get_d());
}

wektor multiply(const madrix &lhs, const wektor &rhs) noexcept
{
    return wektor(lhs.get_a()*rhs.get_x() + lhs.get_b()*rhs.get_y(),
                  lhs.get_c()*rhs.get_x() + lhs.get_d()*rhs.get_y());
}
