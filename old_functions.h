#ifndef OLD_FUNCTIONS_H
#define OLD_FUNCTIONS_H

#include "SFML/Graphics.hpp"

void Fiboinit(int fib_var[], int max_var, int fractar);

void Fiborand(int fib_var[], int max_var, int fractar);

void Dark_Maze_PRNG(int square_matrix[][201], int max_level, int size_level, int clear_radius,
bool half_gone, bool pillars_exist, bool wall_exist, bool zero_wall, bool wall_concrete, bool exit_exist, bool dark_exist,
int fib_val[], int max_val, int fractal, double wall_frac, double dark_frac, double exit_frac,
double candy_frac, double red_candy_frac, double yellow_candy_frac, double green_candy_frac, double blue_candy_frac);

void Invis_Walls_PRNG(int square_matrix[][201], int max_level, int size_level);

void Invis_Maze_PRNG(int square_matrix[][201], int max_level, int size_level);

void Clear_Maze_PRNG(int square_matrix[][201], int max_level, int size_level);

void Blinker(int blinc, bool blinc_on);

void Background_Blinker(bool& background_blink_on, int& background_blink, int max_transp);

void Exit_Multicolor(int kolor[]);

void Colorize(int colorz_in[], int colorz_out[]);

void Color_Picker(int cube_identityy, int colorz[], int multikolor[]);

sf::RectangleShape Square_Draw(sf::RectangleShape squaraa, int colourz[], int tranzp,
                               double poz_x, double poz_y, double squarral_x, double squarral_y);

#endif // OLD_FUNCTIONS_H
