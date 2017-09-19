#include "enum_classes.h"





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
