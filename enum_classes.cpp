#include "enum_classes.h"

std::vector<hyperchoice> choice_vector()
{
    std::vector<hyperchoice> choices;

    choices.push_back(hyperchoice::none);
    choices.push_back(hyperchoice::alab);
    choices.push_back(hyperchoice::conc);
    choices.push_back(hyperchoice::points);
    choices.push_back(hyperchoice::trap);
    choices.push_back(hyperchoice::up);

    return choices;
}

hypertype choose_type(const hyperchoice &choice) noexcept
{
    switch (choice)
    {
        case hyperchoice::none:
            return hypertype::none;
            break;
        case hyperchoice::alab:
            return hypertype::alabaster;
            break;
        case hyperchoice::conc:
            return hypertype::concrete;
            break;
        case hyperchoice::trap:
            return hypertype::dark_trap;
            break;
        case hyperchoice::up:
            return hypertype::level_up;
            break;
    }

    return hypertype::none;
}

hypercolor type_to_color(const hypertype &typ) noexcept
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
