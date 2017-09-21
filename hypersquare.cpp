#include "hypersquare.h"

hypersquare::hypersquare(const std::vector <int> &posit)
    : m_posit(),
      m_type(hypertype::none),
      m_color(hypercolor::clear)
{
    assert(posit.size() == 2);
    m_posit = posit;
}

hypersquare::hypersquare(const std::vector<int> &posit,
                         const std::vector<unsigned> &type_chances,
                         fibran &ranfib)
    : m_posit(),
      m_type(chance_type(ranfib, type_chances)),
      m_color(type_to_color(m_type))
{
    assert(posit.size() == 2);
    m_posit = posit;
}

hypersquare::hypersquare(const std::vector<int> &posit,
                         const bool luck,
                         fibran &ranfib)
    : m_posit(),
      m_type(rand_type(ranfib)),
      m_color(type_to_color(m_type))
{
    assert(posit.size() == 2);
    m_posit = posit;
}


hypersquare::hypersquare(const std::vector <int> &posit,
                         const hypertype &type,
                         const hypercolor &color)
    : m_posit(),
      m_type(type),
      m_color(color)
{
    assert(posit.size() == 2);
    m_posit = posit;
}

hypersquare::~hypersquare()
{ }

void hypersquare::set_posit(const std::vector<int> &posit)
{
    assert(posit.size() == 2);
    m_posit = posit;
}
