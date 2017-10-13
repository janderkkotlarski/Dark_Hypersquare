#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <cassert>
#include <iostream>
#include <string>
#include <vector>
#include <chrono>

#include "fibran.h"
#include "enum_classes.h"

void print_posit(const std::vector <int> posit);

unsigned time_out();

hypertype chance_type(fibran &ranfib,
                      const std::vector<unsigned> &type_chances);

hypertype rand_type(fibran &ranfib) noexcept;

void add_direct(std::vector<int> &posit,
                const std::vector<int> &direct);

void rotate_right(std::vector<int> &direct);

void rotate_left(std::vector<int> &direct);

#endif // FUNCTIONS_H
