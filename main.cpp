#include <cassert>
#include <iostream>
#include <chrono>
#include <vector>

#include "starting.h"
#include "game.h"
#include "enum_classes.h"
#include "hypersquare.h"
#include "hyperlevel.h"
#include "wektor.h"
#include "textout.h"
#include "functions.h"
#include "fibran.h"

int main()
{
    const unsigned seed
    { time_out() };

    std::cout << seed << '\n';

    fibran ranfib(seed, seed*seed);

    ranfib.display();

    const unsigned minim
    { 1000 };

    const unsigned addit
    { seed % minim };

    const int limit
    { static_cast<int>(minim + addit) };

    int count
    { 0 };

    while (count < limit)
    {
        ranfib.step();
        // ranfib.display();
        ++count;
    }

    ranfib.display();

    starting starter;

    starter.run();

    game dark_hypersquare;

    dark_hypersquare.run();

    constexpr std::chrono::nanoseconds timestep(16000000);

    using clock = std::chrono::high_resolution_clock;

    std::chrono::nanoseconds lag(0);
    auto time_start = clock::now();
    bool quit_game = false;

    // game_state current_state;
    // game_state previous_state;

    const auto max_loop
    { 1000000 };

    auto loop
    { 0 };

    auto hyperkey
    { hypertype::none };

    const auto hyperlock
    { hypertype::level_up };

    std::vector <hypertype> hyperduo;

    hyperduo.push_back(hyperkey);
    hyperduo.push_back(hyperlock);

    const auto hyperduck
    { hyperduo };

    while (hyperkey != hyperlock)
    {
        auto delta_time = clock::now() - time_start;
        time_start = clock::now();
        lag += std::chrono::duration_cast<std::chrono::nanoseconds>(delta_time);

        // quit_game = handle_events();

        // update game logic as lag permits
        while(lag >= timestep)
        {
            lag -= timestep;

            // previous_state = current_state;
            // update(&current_state); // update at a fixed rate each time
        }

        // calculate how close or far we are from the next timestep
        auto alpha = (float) lag.count() / timestep.count();
        // auto interpolated_state = interpolate(current_state, previous_state, alpha);

        // render(interpolated_state);

        ++loop;

        if (loop >= max_loop)
        { hyperkey = hyperlock; }
    }

    /*

    wektor wek(31, 42);

    wek.out();

    wektor wak(60, 50);

    wak.out();

    wektor wok;

    wok = wek - wak;


    wok.out();

    wek -= -wok;

    wek.out();

    const hypertype randy
    { rand_type() };

    hypersquare quart({3, 5}, true);

    textout(quart.get_color());

    const hypertype hype
    { rand_type() };

    textout(type_to_color(hype));

    std::cout << '\n';

    */

    hyperlevel rever
    { 10, true, ranfib };

    rever.display();

    return 0;
}
