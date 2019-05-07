#ifndef OLD_FUNCTIONS_H
#define OLD_FUNCTIONS_H

#include "SFML/Graphics.hpp"

void Fiboinit(int fib_var[], int max_var, int fractar);

void Fiborand(int fib_var[], int max_var, int fractar);

void Dark_Maze_PRNG(int square_matrix[][201], int max_level, int size_level, int clear_radius,
bool half_gone, bool pillars_exist, bool wall_exist, bool zero_wall, bool wall_concrete, bool exit_exist, bool dark_exist,
int fib_val[], int max_val, int fractal, float wall_frac, float dark_frac, float exit_frac,
float candy_frac, float red_candy_frac, float yellow_candy_frac, float green_candy_frac, float blue_candy_frac);

void Invis_Walls_PRNG(int square_matrix[][201], int max_level, int size_level);

void Invis_Maze_PRNG(int square_matrix[][201], int max_level, int size_level);

void Clear_Maze_PRNG(int square_matrix[][201], int max_level, int size_level);

void Blinker(int blinc, bool blinc_on);

void Background_Blinker(bool& background_blink_on, int& background_blink, int max_transp);

void Exit_Multicolor(int kolor[]);

void Colorize(int colorz_in[], int colorz_out[]);

void Color_Picker(int cube_identityy, int colorz[], int multikolor[]);

sf::RectangleShape Square_Draw(sf::RectangleShape squaraa, int colourz[], int tranzp,
                               float poz_x, float poz_y, float squarral_x, float squarral_y);

#endif // OLD_FUNCTIONS_H
