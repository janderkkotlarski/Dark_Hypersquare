#include "game.h"

game::game()
{ }

game::~game()
{ }

void game::run()
{
    std::cout << "game looping\n";

    const int seed
    { time_out() };

    std::cout << seed << '\n';

    fibran ranfib(seed, seed*seed);

    ranfib.display();

    const int minim
    { 1000 };

    ranfib.step(minim);

    ranfib.display();

    starting starter;

    starter.run();




    constexpr std::chrono::nanoseconds timestep(100000000);

    using clock = std::chrono::high_resolution_clock;

    std::chrono::nanoseconds lag(0);
    auto time_start = clock::now();


    auto hyperkey
    { hypertype::none };

    const auto hyperlock
    { hypertype::level_up };

    std::vector <hypertype> hyperduo;

    hyperduo.push_back(hyperkey);
    hyperduo.push_back(hyperlock);

    const auto hyperduck
    { hyperduo };

    controls keyput;

    long iter
    { 0 };

    while (!keyput.get_up() &&
           iter < 1000)
    {
        keyput.reset();
        keyput.check();


        auto delta_time = clock::now() - time_start;
        time_start = clock::now();
        lag += std::chrono::duration_cast<std::chrono::nanoseconds>(delta_time);

        // quit_game = handle_events();

        // update game logic as lag permits

        long count
        { 0 };

        while(lag >= timestep &&
              !keyput.get_up())

        {


            lag -= timestep;

            keyput.check();


            ++count;



            // previous_state = current_state;
            // update(&current_state); // update at a fixed rate each time
        }

        // calculate how close or far we are from the next timestep
        auto alpha = (float) lag.count() / timestep.count();
        // auto interpolated_state = interpolate(current_state, previous_state, alpha);

        // render(interpolated_stateunsigned);

        //++loop;

        // if (loop >= max_loop)
        // { hyperkey = hyperlock; }

        std::cout << "Iteration: " << iter << " : " << count << '\n';

        ++iter;

    }


    std::vector<int> type_chances;

    type_chances.push_back(1); // alabaster
    type_chances.push_back(1); // concrete
    type_chances.push_back(0); // none
    type_chances.push_back(0); // red_points
    type_chances.push_back(0); // yellow_points
    type_chances.push_back(0); // green_points
    type_chances.push_back(0); // blue points
    type_chances.push_back(0); // dark_trap
    type_chances.push_back(0); // level_up

    weighing_types(type_chances);

    const int start_level
    { 25 };

    hyperlevel verev
    (start_level, type_chances, ranfib);

    verev.textdisp();

    verev.move_forward();

    const std::vector<int> up
    { 0 , -1};

    const std::vector<int> right
    { 1, 0 };

    const std::vector<int> down
    { 0, 1 };

    const std::vector<int> left
    { -1, 0 };

    std::vector<int> direction
    { right };

    assert(direction == right);

    verev.textdisp();

    doing();
}

void doing()
{
    std::cout << "Does something...\n";
}
