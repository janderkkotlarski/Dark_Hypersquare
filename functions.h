#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <cassert>
#include <iostream>
#include <string>
#include <vector>
#include <chrono>

#include "fibran.h"
#include "enum_classes.h"
#include "choiceweight.h"

void print_posit(const std::vector <int> posit);

unsigned time_out();



unsigned type_select(std::vector<hyperchoice> &choices,
                     std::vector<unsigned> &weights);

hypertype cumul_type(fibran &ranfib, const unsigned minim,
                     const std::vector<choiceweight> &choights);

hypertype rand_type(fibran &ranfib) noexcept;

#endif // FUNCTIONS_H
