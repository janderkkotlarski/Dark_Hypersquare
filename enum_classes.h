#ifndef ENUM_CLASSES_H
#define ENUM_CLASSES_H

#include <cassert>
#include <iostream>
#include <string>
#include <random>
#include <chrono>

enum class hypertype
{
    none,
    concrete,
    alabaster,
    level_up,
    level_down,
    red_points,
    yellow_points,
    green_points,
    blue_points,
    dark_trap,
    player
};

hypertype rand_type() noexcept;

enum class hypercolor
{
    clear,
    white,
    gray,
    dark,
    spectrum,
    purple,
    red,
    yellow,
    green,
    blue,
    chroma
};

hypercolor type_to_color(const hypertype &type);


#endif // ENUM_CLASSES_H
