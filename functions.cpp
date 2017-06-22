#include "functions.h"

void print_posit(const std::vector <int> posit)
{
    assert(posit.size() == 2);

    if (posit.size() == 2)
    {
        std::cout << "[" << posit[0] << ":" << posit[1] << "]\n";
    }
}
