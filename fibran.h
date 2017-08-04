#ifndef FIBRAN_H
#define FIBRAN_H

#include <cassert>
#include <cmath>

class fibran
{
    const int m_max;
    int m_1;
    int m_2;

public:

    fibran(const int s_1,
           const int s_2);

    ~fibran();

    int ran_out() const noexcept
    { return m_1; }

    void step() noexcept;

};

#endif // FIBRAN_H
