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
    const int temp
    { (m_1 + m_2) % m_max };

    m_1 = m_2;

    m_2 = temp;
}
