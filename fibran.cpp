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
    const unsigned temp
    { ((m_1 + m_2) % m_max) + 1 };

    m_1 = m_2;

    m_2 = temp;
}
