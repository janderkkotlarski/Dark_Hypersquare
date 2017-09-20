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

std::vector<hyperchoice> choice_vector();

hypertype choose_type(const hyperchoice &choice) noexcept;

hypercolor type_to_color(const hypertype &type) noexcept;

#endif // ENUM_CLASSES_H
