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

void madrix::set_abcd(const int a, const int b,
                      const int c, const int d) noexcept
{
    m_a = a;
    m_b = b;
    m_c = c;
    m_d = d;
}

void madrix::operator+= (const madrix &wek) noexcept
{
    const int a_add
    { get_a() + wek.get_a() };

    const int b_add
    { get_b() + wek.get_b() };

    const int c_add
    { get_c() + wek.get_c() };

    const int d_add
    { get_d() + wek.get_d() };

    set_abcd(a_add, b_add, c_add, d_add);
}

void madrix::operator-= (const madrix &wek) noexcept
{
    const int a_min
    { get_a() - wek.get_a() };

    const int b_min
    { get_b() - wek.get_b() };

    const int c_min
    { get_c() - wek.get_c() };

    const int d_min
    { get_d() - wek.get_d() };

    set_abcd(a_min, b_min, c_min, d_min);
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
