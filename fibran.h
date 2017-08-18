#ifndef FIBRAN_H
#define FIBRAN_H

#include <cassert>
#include <cmath>
#include <iostream>

class fibran
{
    const unsigned m_max;
    unsigned m_1;
    unsigned m_2;

public:

    fibran(const unsigned s_1,
           const unsigned s_2);

    ~fibran();

    unsigned max() const noexcept
    { return m_max; }

    unsigned out() const noexcept
    { return m_1; }

    unsigned alt() const noexcept
    { return m_2; }

    void display() const noexcept
    { std::cout << out() << " : " << alt() << '\n'; }

    void step() noexcept;

    void step(const unsigned minim);

};

#endif // FIBRAN_H
