#include "functions.h"

void print_posit(const std::vector <int> posit)
{
    assert(posit.size() == 2);

    if (posit.size() == 2)
    { std::cout << "[" << posit[0] << ":" << posit[1] << "]\n"; }
}

unsigned time_out()
{
    std::chrono::time_point<std::chrono::system_clock> now
    { std::chrono::system_clock::now() };

    auto duration
    { now.time_since_epoch() };

    return static_cast<unsigned>(std::chrono::duration_cast<std::chrono::nanoseconds>(duration).count());
}

unsigned type_select(std::vector<hyperchoice> &choices,
                     std::vector<unsigned> &weights)
{
    const unsigned minim
    { 1000 };

    unsigned cumul
    { 0 };

    assert(weights.size() == 0);
    for (int count {0}; count < 6; ++count)
    { weights.push_back(0); }

    if (choices.size() > 0)
    {
        for (hyperchoice choice : choices)
        {
            if (choice == hyperchoice::none)
            { weights[0] += minim; }

            if (choice == hyperchoice::alab)
            { weights[1] += minim; }

            if (choice == hyperchoice::conc)
            { weights[2] += minim; }

            if (choice == hyperchoice::points)
            { weights[3] += minim; }

            if (choice == hyperchoice::trap)
            { weights[4] += minim; }

            if (choice == hyperchoice::up)
            { weights[5] += minim; }

            cumul += minim;
        }

        return cumul;
    }

    return 0;
}


hypertype cumul_type(fibran &ranfib)
{
    const unsigned size_types
    { 6 };


}

hypertype rand_type(fibran &ranfib) noexcept
{
    const unsigned size
    { (unsigned)hypertype::player + 1 };

    ranfib.step(size);

    const unsigned part
    { ranfib.max()/size };

    const unsigned roll
    { ranfib.out() };

    if (roll < 2*part)
    { return hypertype::none; }
    else if (roll < 3*part)
    { return hypertype::alabaster; }
    else if (roll < 4*part)
    { return hypertype::concrete; }
    else if (roll < 5*part)
    { return hypertype::red_points; }
    else if (roll < 6*part)
    { return hypertype::yellow_points; }
    else if (roll < 7*part)
    { return hypertype::green_points; }
    else if (roll < 8*part)
    { return hypertype::blue_points; }
    else if (roll < 9*part)
    { return hypertype::dark_trap; }
    else if (roll < 10*part)
    { return hypertype::level_up; }
    else if (roll < 11*part)
    { return hypertype::level_down; }

    return hypertype::none;
}
