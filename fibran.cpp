#include "fibran.h"

fibran::fibran(const unsigned s_1,
               const unsigned s_2)
    : m_max(1000000000),
      m_1(s_1 % m_max),
      m_2(s_2 % m_max)
{ }

fibran::~fibran()
{ }

void fibran::step() noexcept
{
    unsigned temp
    { m_1 + m_2 };

    if (temp > m_max)
    { temp = (temp % m_max) - 3; }

    // { ((m_1 + m_2) % m_max) + 1 };

    m_1 = m_2;

    m_2 = temp;
}

void fibran::step(const unsigned minim)
{
    step();

    const unsigned limit
    { minim + (out() % minim) };

    unsigned count
    { 0 };

    while (count < limit)
    {
        step();
        ++count;
    }
}
