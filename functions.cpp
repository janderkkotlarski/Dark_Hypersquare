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

hypertype chance_type(fibran &ranfib,
                      const std::vector<unsigned> &type_chances)
{
    const std::vector<hypertype> type_vector
    { type_vectoring() };

    assert(type_vector.size() == type_chances.size());

    std::vector<unsigned> limits;

    unsigned cumul_weight
    { 0 };

    for (const unsigned chance : type_chances)
    {
        cumul_weight += chance;
        limits.push_back(cumul_weight);
    }

    if (cumul_weight == 0)
    { return hypertype::none; }

    assert(ranfib.max() >= cumul_weight);

    ranfib.step(type_chances.size());

    const unsigned roll
    { ranfib.out() % cumul_weight };

    unsigned count
    { 0 };

    for (const unsigned limit : limits)
    {
        if (roll < limit &&
            type_chances[count] > 0)
        { return type_vector[count]; }

        ++count;
    }

    return hypertype::none;
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

void add_direct(std::vector<int> &posit,
                const std::vector<int> &direct)
{
    assert(posit.size() == 2);
    assert(direct.size() == 2);

    posit[0] += direct[0];
    posit[1] += direct[1];
}

void turn_right(std::vector<int> &direct)
{
    assert(direct.size() == 2);

    direct = std::vector<int> { -direct[1], direct[0] };
}

void turn_left(std::vector<int> &direct)
{
    assert(direct.size() == 2);

    direct = std::vector<int> { direct[1], -direct[0] };
}
