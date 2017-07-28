#ifndef ENUM_CLASSES_H
#define ENUM_CLASSES_H

#include <cassert>
#include <iostream>
#include <string>
#include <random>


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
    SIZE
};

hypertype rand_type();

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
    SIZE
};

#endif // ENUM_CLASSES_H
