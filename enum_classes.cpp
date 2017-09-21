#include "enum_classes.h"

std::vector<hypertype> type_vector() noexcept
{
    std::vector<hypertype> types;


    choices.push_back(hypertype::alabaster);
    choices.push_back(hypertype::concrete);
    choices.push_back(hypertype::none);
    choices.push_back(hypertype::red_points);
    choices.push_back(hypertype::yellow_points);
    choices.push_back(hypertype::green_points);
    choices.push_back(hypertype::blue_points);
    choices.push_back(hypertype::dark_trap);
    choices.push_back(hypertype::level_up);

    return types;
}

std::vector<hypertype> point_types() noexcept
{
    std::vector<hypertype> types;

    types.push_back(hypertype::red_points);
    types.push_back(hypertype::yellow_points);
    types.push_back(hypertype::green_points);
    types.push_back(hypertype::blue_points);

    return types;
}

void weighing_types(const std::vector<hypertype> &type_vector,
                    const std::vector<unsigned> &type_pick)
{
    const std::vector<unsigned> chances
    {
        2000,
        2000,
        4500,
        840,
        240,
        84,
        36,
        240,
        60
    }

    unsigned total_chance
    { 10000 };

    unsigned wall_chance
    { 4000 };

    unsigned wall_div
    { 0 };

    if (type_pick)

    unsigned none_chance
    { 0 };

    const unsigned red_chance
    { 840 };

    const unsigned yellow_chance
    { 240 };

    const unsigned green_chance
    { 84 };

    const unsigned blue_chance
    { 36 };

    const unsigned dark_chance
    { 240 };

    const unsigned up_chance
    { 60 };

    unsigned index
    { 0 };

    for (const hypertype type : type_vector)
    {
        if (type_pick[index])
        {
            if (type == hypertype::alabaster ||
                type == hypertype::concrete)
            { ++wall_div; }
            else if (type == hypertype::none)
            { none_chance += chances[index]; }
            else
            { type_pick[index] = chances[index]; }
        }
        else
        { none_chance += chances[index]; }

        if (type == hypertype::concrete &&
            wall_div)
        {
            wall_chance /= wall_div;

            for (int count {0}; count <= index; ++count)
            {
                if (type_pick[index])
                { type_pick[index] = wall_chance; }
            }
        }



        ++index;
    }
}

std::vector<unsigned> points(const unsigned minim) noexcept
{
    const unsigned nimin
    { minim/100 };

    return std::vector<unsigned>
    {
        70*nimin,
        20*nimin,
        7*nimin,
        3*nimin
    };
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
        case hyperchoice::points:
            return hypertype::none;
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
