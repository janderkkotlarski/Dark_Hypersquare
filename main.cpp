#include <cassert>
#include <iostream>
#include <chrono>

#include "starting.h"
#include "game.h"


int main()
{
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

    while(!quit_game)
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
    }

    return 0;
}
