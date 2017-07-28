#include "enum_classes.h"

hypertype rand_type() noexcept
{
    const unsigned size
    { (unsigned)hypertype::player };

    std::random_device rand;

    const unsigned roll
    { rand()%size };

    switch (roll)
    {
        case 0:
            return hypertype::none;
            break;
        case 1:
            return hypertype::alabaster;
            break;
        case 2:
            return hypertype::concrete;
            break;
        case 3:
            return hypertype::level_up;
            break;
        case 4:
            return hypertype::level_down;
            break;
        case 5:
            return hypertype::dark_trap;
            break;
        case 6:
            return hypertype::red_points;
            break;
        case 7:
            return hypertype::yellow_points;
            break;
        case 8:
            return hypertype::green_points;
            break;
        case 9:
            return hypertype::blue_points;
            break;        
    }

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
        case hypertype::player:
            return hypercolor::chroma;
            break;
    }

    return hypercolor::clear;
}
