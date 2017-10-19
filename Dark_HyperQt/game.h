#ifndef GAME_H
#define GAME_H

#include <cassert>
#include <iostream>
#include <string>
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
#include "controls.h"

class game
{

public:
    game();
    ~game();

    void run();
};

void doing();

#endif // GAME_H
