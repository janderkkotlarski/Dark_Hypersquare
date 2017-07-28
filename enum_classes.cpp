#include "enum_classes.h"

hypertype rand_type()
{
    const unsigned size
    { (unsigned)hypertype::SIZE };

    std::random_device rand;

    const unsigned part
    { rand.max()/size };

    const unsigned roll
    { rand() };

    // if


    std::cout << size << '\n';

    return hypertype::none;
}
