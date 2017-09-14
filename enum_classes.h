#ifndef ENUM_CLASSES_H
#define ENUM_CLASSES_H

#include <cassert>
#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <chrono>

#include "fibran.h"

enum class hyperchoice
{
    none,
    points,
    alab,
    conc,
    trap,
    up
};

class choiceweight
{
    hyperchoice m_choice;
    unsigned m_weight;

    choiceweight(const hyperchoice &choice,
                const unsigned weight);

public:

    hyperchoice get_choice() const noexcept
    { return m_choice; }

    unsigned get_weight() const noexcept
    { return m_weight; }
};

unsigned type_select(std::vector<hyperchoice> &choices,
                     std::vector<unsigned> &weights);

enum class hypertype
{
    none,
    alabaster,
    concrete,    
    red_points,
    yellow_points,
    green_points,
    blue_points,
    dark_trap,
    level_up,
    level_down,
    player
};



hypertype rand_type(fibran &ranfib) noexcept;

enum class hypercolor
{
    clear,
    white,
    gray,
    red,
    yellow,
    green,
    blue,
    dark,
    spectrum,
    purple,
    chroma
};

hypercolor type_to_color(const hypertype &type);


#endif // ENUM_CLASSES_H
