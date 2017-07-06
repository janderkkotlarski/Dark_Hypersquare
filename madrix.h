#ifndef MADRIX_H
#define MADRIX_H

#include <cassert>
#include <iostream>
#include <string>

class madrix
{
    int m_a;
    int m_b;
    int m_c;
    int m_d;

public:

    madrix();

    int get_a() noexcept
    { return m_a; }

    int get_b() noexcept
    { return m_b; }

    int get_c() noexcept
    { return m_c; }

    int get_d() noexcept
    { return m_d; }


};

#endif // MADRIX_H
