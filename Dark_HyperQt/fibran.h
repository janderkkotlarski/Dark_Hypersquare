#ifndef FIBRAN_H
#define FIBRAN_H

#include <cassert>
#include <cmath>
#include <iostream>

class fibran
{
    const int m_max;
    int m_1;
    int m_2;

public:

    fibran(const int s_1,
           const int s_2);

    ~fibran();

    int max() const noexcept
    { return m_max; }

    int out() const noexcept
    { return m_1; }

    int alt() const noexcept
    { return m_2; }

    void display() const noexcept
    { std::cout << out() << " : " << alt() << '\n'; }

    void step() noexcept;

    void step(const int minim);

};

#endif // FIBRAN_H
