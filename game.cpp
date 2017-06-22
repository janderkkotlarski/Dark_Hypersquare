#include "game.h"

game::game()
{ }

game::~game()
{ }

void game::run()
{
    std::cout << "game looping\n";

    doing();
}

void doing()
{
    std::cout << "Does something...\n";
}
