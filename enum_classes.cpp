#include "enum_classes.h"

hypertype rand_type() noexcept
{
    const unsigned size
    { (unsigned)hypertype::SIZE };

    std::random_device rand;

    const unsigned part
    { rand.max()/size };

    const unsigned roll
    { rand() };

    if (roll < 1*part)
    { return hypertype::none; }
    else if (roll < 2*part)
    { return hypertype::alabaster; }
    else if (roll < 3*part)
    { return hypertype::concrete; }
    else if (roll < 4*part)
    { return hypertype::level_up; }
    else if (roll < 5*part)
    { return hypertype::level_down; }
    else if (roll < 6*part)
    { return hypertype::dark_trap; }
    else if (roll < 7*part)
    { return hypertype::red_points; }
    else if (roll < 8*part)
    { return hypertype::yellow_points; }
    else if (roll < 9*part)
    { return hypertype::green_points; }
    else if (roll < 10*part)
    { return hypertype::blue_points; }

    return hypertype::none;
}

hypercolor type_to_color(const hypertype &typ)
{
    switch (typ)
    {
        case hypertype::none:
            return hypercolor::clear;
            break;
        case hypertype::alabaster:
            return hypercolor::white;
            break;
        case hypertype::concrete:
            return hypercolor::gray;
            break;
        case hypertype::level_up:
            return hypercolor::spectrum;
            break;
        case hypertype::level_down:
            return hypercolor::purple;
            break;
        case hypertype::dark_trap:
            return hypercolor::dark;
            break;
        case hypertype::red_points:
            return hypercolor::red;
            break;
        case hypertype::yellow_points:
            return hypercolor::yellow;
            break;
        case hypertype::green_points:
            return hypercolor::green;
            break;
        case hypertype::blue_points:
            return hypercolor::blue;
            break;
        case hypertype::SIZE:
            break;
    }

    return hypercolor::clear;
}
