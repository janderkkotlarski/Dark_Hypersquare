#include "fibran.h"

fibran::fibran(const int s_1,
               const int s_2)
    : m_max(1000000000),
      m_1(s_1 % m_max),
      m_2(s_2 % m_max)
{ }

fibran::~fibran()
{ }

void fibran::step() noexcept
{
    int temp
    { m_1 + m_2 };

    if (temp > m_max)
    { temp = (temp % m_max) - 3; }

    // { ((m_1 + m_2) % m_max) + 1 };

    m_1 = m_2;

    m_2 = temp;
}

void fibran::step(const int minim)
{
    step();

    const int limit
    { minim + (out() % minim) };

    int count
    { 0 };

    while (count < limit)
    {
        step();
        ++count;
    }
}
