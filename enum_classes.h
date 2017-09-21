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

std::vector<hypertype> type_vector() noexcept;

void weighing_types(const std::vector<hypertype> &type_vector,
                    const std::vector<unsigned> &type_pick);

std::vector<hypertype> point_types() noexcept;

std::vector<unsigned> points(const unsigned minim) noexcept;

hypertype choose_type(const hyperchoice &choice) noexcept;

hypercolor type_to_color(const hypertype &type) noexcept;

#endif // ENUM_CLASSES_H
