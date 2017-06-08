#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <cassert>
#include <iostream>
#include <string>
#include <vector>

void print_posit(const std::vector <int> posit)
{
    assert(posit.size() == 2);

    if (posit.size() == 2)
    {
        std::cout << "[" << posit[0] << ":" << posit[1] << "]\n";
    }
}

#endif // FUNCTIONS_H
