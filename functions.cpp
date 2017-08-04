#include "functions.h"

void print_posit(const std::vector <int> posit)
{
    assert(posit.size() == 2);

    if (posit.size() == 2)
    { std::cout << "[" << posit[0] << ":" << posit[1] << "]\n"; }
}

int time_out()
{
    std::chrono::time_point<std::chrono::system_clock> now
    { std::chrono::system_clock::now() };

    auto duration
    { now.time_since_epoch() };

    return static_cast<int>(std::chrono::duration_cast<std::chrono::nanoseconds>(duration).count());
}
