#include "enum_classes.h"

std::vector<hypertype> type_vectoring() noexcept
{
    std::vector<hypertype> types;

    types.push_back(hypertype::alabaster);
    types.push_back(hypertype::concrete);
    types.push_back(hypertype::none);
    types.push_back(hypertype::red_points);
    types.push_back(hypertype::yellow_points);
    types.push_back(hypertype::green_points);
    types.push_back(hypertype::blue_points);
    types.push_back(hypertype::dark_trap);
    types.push_back(hypertype::level_up);

    return types;
}

std::vector<unsigned> chance_vectoring() noexcept
{
    return std::vector<unsigned>
    {
        3000,
        3000,
        3000,
        560,
        160,
        56,
        24,
        160,
        40
    };
}

void weighing_types(std::vector<unsigned> &type_chances)
{
    const std::vector<hypertype> type_vector
    { type_vectoring() };

    assert(type_vector.size() == type_chances.size());

    const std::vector<unsigned> chances
    { chance_vectoring() };

    assert(chances.size() == type_chances.size());

    unsigned wall_chance
    { 4000 };

    unsigned wall_div
    { 0 };

    unsigned none_chance
    { 0 };

    unsigned index
    { 0 };

    for (const hypertype type : type_vector)
    {
        if (type_chances[index])
        {
            if (type == hypertype::alabaster ||
                type == hypertype::concrete)
            { ++wall_div; }
            else if (type == hypertype::none)
            { none_chance += chances[index]; }
            else
            { type_chances[index] = chances[index]; }
        }
        else
        { none_chance += chances[index]; }

        if (type == hypertype::concrete &&
            wall_div)
        {
            wall_chance /= wall_div;

            for (unsigned count {0}; count <= 1; ++count)
            {
                if (type_chances[count])
                { type_chances[count] = wall_chance; }
            }
        }

        ++index;
    }

    type_chances[2] = none_chance;
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
