#include "old_functions.h"

#include <random>

void Fiboinit(int fib_var[], int max_var, int fractar)
{
  std::random_device generator;
  std::uniform_int_distribution<int> distribution(1, fractar);

  int	frac_var = distribution(generator);
  int ran_var = frac_var;

  if (ran_var <= 0)
  { ran_var = 1; }

  if (ran_var >= (fractar + 1))
  { ran_var = fractar; }

  fib_var[0] = ran_var;

  frac_var = distribution(generator);

  ran_var = frac_var;

  if (ran_var <= 0)
  { ran_var = 1; }

  if (ran_var >= (fractar + 1))
  { ran_var = fractar; }

  fib_var[1] = ran_var;
  fib_var[2] = 0;
}

void Fiborand(int fib_var[], int max_var, int fractar)
{
  fib_var[2] = fib_var[1];
  fib_var[1] = fib_var[1] + fib_var[0];
  fib_var[0] = fib_var[2];

  if (fib_var[1] >= max_var)
  { fib_var[1] = fib_var[1] - fractar - 1; }
}

void Dark_Maze_PRNG(int square_matrix[][201], int max_level, int size_level, int clear_radius,
bool half_gone, bool pillars_exist, bool wall_exist, bool zero_wall, bool wall_concrete, bool exit_exist, bool dark_exist,
int fib_val[], int max_val, int fractal, double wall_frac, double dark_frac, double exit_frac,
double candy_frac, double red_candy_frac, double yellow_candy_frac, double green_candy_frac, double blue_candy_frac)
{
  for (int a_sub = -size_level; a_sub <= size_level; a_sub++)
  {
    for (int b_sub = -size_level; b_sub <= size_level; b_sub++)
    {
      square_matrix[a_sub + max_level][b_sub + max_level] = 0;

      if (((abs(a_sub) % 2) == 1) && ((abs(b_sub) % 2) == 1) && pillars_exist &&
        (((abs(a_sub) > (size_level/2)) || (abs(b_sub) > (size_level/2))) ||
        !half_gone) &&
        pillars_exist)
      { square_matrix[a_sub + max_level][b_sub + max_level] = 1; }

      if (((abs(a_sub) % 2) == 0) && ((abs(b_sub) % 2) == 0) &&
        ((a_sub != 0) || (b_sub != 0)))
      {
        if ((1.0*fib_val[0]) < candy_frac*(1.0*max_val))
        {
          if ((1.0*fib_val[0]) < red_candy_frac*(1.0*max_val))
          { square_matrix[a_sub + max_level][b_sub + max_level] = 5; }

          if (((1.0*fib_val[0]) > (red_candy_frac)*(1.0*max_val)) &&
            ((1.0*fib_val[0]) < (red_candy_frac + yellow_candy_frac)*(1.0*max_val)))
          { square_matrix[a_sub + max_level][b_sub + max_level] = 6; }

          if (((1.0*fib_val[0]) > (red_candy_frac + yellow_candy_frac)*(1.0*max_val)) &&
            ((1.0*fib_val[0]) < (red_candy_frac + yellow_candy_frac + green_candy_frac)*(1.0*max_val)))
          { square_matrix[a_sub + max_level][b_sub + max_level] = 7; }

          if (((1.0*fib_val[0]) > (red_candy_frac + yellow_candy_frac + green_candy_frac)*(1.0*max_val)) &&
            ((1.0*fib_val[0]) < (candy_frac)*(1.0*max_val)))
          { square_matrix[a_sub + max_level][b_sub + max_level] = 8; }
        }

        if (((1.0*fib_val[0]) > (1 - dark_frac)*(1.0*max_val)) &&
          (((abs(a_sub) > (size_level/2)) || (abs(b_sub) > (size_level/2))) ||
          (!half_gone && ((abs(a_sub) > clear_radius) || (abs(b_sub) > clear_radius)))) &&
          dark_exist)
        { square_matrix[a_sub + max_level][b_sub + max_level] = 3; }

        if (((1.0*fib_val[0]) > (0.75 - 0.5*exit_frac)*(1.0*max_val)) &&
          ((1.0*fib_val[0]) < (0.75 + 0.5*exit_frac)*(1.0*max_val)) &&
          (((abs(a_sub) > (size_level/2)) || (abs(b_sub) > (size_level/2))) ||
          (!half_gone && ((abs(a_sub) > clear_radius) || (abs(b_sub) > clear_radius)))) &&
          exit_exist)
        { square_matrix[a_sub + max_level][b_sub + max_level] = 2; }

        Fiborand(fib_val, max_val, fractal);
      }

      if (((((abs(a_sub) % 2) == 0) && ((abs(b_sub) % 2) == 1)) ||
        (((abs(a_sub) % 2) == 1) && ((abs(b_sub) % 2) == 0))) &&
        (((abs(a_sub) > (size_level/2)) || (abs(b_sub) > (size_level/2))) ||
        (!half_gone && ((abs(a_sub) > clear_radius) || (abs(b_sub) > clear_radius)))) &&
        wall_exist)
      {
        if ((1.0*fib_val[0]) < wall_frac*(1.0*max_val))
        {
          square_matrix[a_sub + max_level][b_sub + max_level] = 10;

          if (wall_concrete)
          { square_matrix[a_sub + max_level][b_sub + max_level] = 1; }
        }

        Fiborand(fib_val, max_val, fractal);
      }

      if ((b_sub == 0) && zero_wall)
      { square_matrix[a_sub + max_level][b_sub + max_level] = 1; }

      // std::cout << "[" << a_sub << "-" << b_sub << ":" << square_matrix[a_sub + max_level][b_sub + max_level] << "] ";
    }

    // std::cout << "\n";
  }
}

void Invis_Walls_PRNG(int square_matrix[][201], int max_level, int size_level)
{
  for (int a_sub = -size_level; a_sub <= size_level; a_sub++)
  {
    for (int b_sub = -size_level; b_sub <= size_level; b_sub++)
    {
      if (((((abs(a_sub) % 2) == 0) && ((abs(b_sub) % 2) == 1)) ||
        (((abs(a_sub) % 2) == 1) && ((abs(b_sub) % 2) == 0))) &&
        (b_sub != 0) &&
        (square_matrix[a_sub + max_level][b_sub + max_level] == 1))
      { square_matrix[a_sub + max_level][b_sub + max_level] = -1; }
    }
  }
}

void Invis_Maze_PRNG(int square_matrix[][201], int max_level, int size_level)
{
  for (int a_sub = -size_level; a_sub <= size_level; a_sub++)
  {
    for (int b_sub = -size_level; b_sub <= size_level; b_sub++)
    {
      if (square_matrix[a_sub + max_level][b_sub + max_level] == 1)
      { square_matrix[a_sub + max_level][b_sub + max_level] = -1; }
    }
  }
}

void Clear_Maze_PRNG(int square_matrix[][201], int max_level, int size_level)
{
  for (int a_sub = -size_level; a_sub <= size_level; a_sub++)
  {
    for (int b_sub = -size_level; b_sub <= size_level; b_sub++)
    { square_matrix[a_sub + max_level][b_sub + max_level] = 0; }
  }
}

void Blinker(int blinc, bool blinc_on)
{
  if (blinc_on)
  {
    if (blinc < 255)
    { ++blinc; }
    else
    { blinc_on = false; }
  }

  if (!blinc_on)
  {
    if (blinc > 0)
    { --blinc; }
    else
    {
      blinc_on = true;
      ++blinc;
    }
  }
}

void Background_Blinker(bool& background_blink_on, int& background_blink, int max_transp)
{
  if (background_blink_on)
  {
    if (background_blink < max_transp)
    {
      background_blink = background_blink + 1;

      if (background_blink > max_transp)
      { background_blink = max_transp; }
    }
    else
    { background_blink_on = false; }
  }

  if (!background_blink_on)
  {
    if (background_blink > 0)
    {
      background_blink = background_blink - 1;

      if (background_blink < 0)
      { background_blink = 0; }
    }
    else
    {
      background_blink_on = true;
      background_blink = background_blink + 1;
    }
  }
}

void Exit_Multicolor(int kolor[])
{
  int full_int = 255, gate_delta = 5;

  if ((kolor[0] == full_int) && (kolor[1] > 0))
  {
    kolor[1] = kolor[1] - gate_delta;

    if (kolor[1] < 0)
    { kolor[1] = 0; }
  }

  if ((kolor[0] == full_int) && (kolor[1] == 0) && (kolor[2] < full_int))
  {
    kolor[2] = kolor[2] + gate_delta;

    if (kolor[2] > full_int)
    { kolor[2] = full_int; }
  }

  if ((kolor[2] == full_int) && (kolor[0] > 0))
  {
    kolor[0] = kolor[0] - gate_delta;

    if (kolor[0] < 0)
    { kolor[0] = 0; }
  }

  if ((kolor[2] == full_int) && (kolor[0] == 0) && (kolor[1] < full_int))
  {
    kolor[1] = kolor[1] + gate_delta;

    if (kolor[1] > full_int)
    { kolor[1] = full_int; }
  }

  if ((kolor[1] == full_int) && (kolor[2] > 0))
  {
    kolor[2] = kolor[2] - gate_delta;

    if (kolor[2] < 0)
    { kolor[2] = 0; }
  }

  if ((kolor[1] == full_int) && (kolor[2] == 0) && (kolor[0] < full_int))
  {
    kolor[0] = kolor[0] + gate_delta;

    if (kolor[0] > full_int)
    { kolor[0] = full_int; }
  }
}

void Colorize(int colorz_in[], int colorz_out[])
{
  for (int a_sub = 0; a_sub < 3; a_sub++)
  { colorz_out[a_sub] = colorz_in[a_sub]; }
}


void Color_Picker(int cube_identityy, int colorz[], int multikolor[])
{
  int whitee[3] = {255, 255, 255}, greyy[3] = {128, 128, 128}, blackk[3] = {0, 0, 0};
  int redd[3] = {255, 0, 0}, orangee[3] = {255, 128, 0}, yelloww[3] = {255, 255, 0};
  int greenn[3] = {0, 255, 0}, aquaa[3] = {0, 255, 255}, bluee[3] = {0, 0, 255}, violett[3] = {128, 0, 255};
  int darkk[3] = {24, 24, 24};

  if (cube_identityy <= 0)
  { Colorize(blackk, colorz); }

  if (cube_identityy == 1)
  { Colorize(greyy, colorz); }

  if (cube_identityy == 2)
  { Colorize(multikolor, colorz); }

  if (cube_identityy == 3)
  { Colorize(darkk, colorz); }

  if (cube_identityy == 4)
  { Colorize(violett, colorz); }

  if (cube_identityy == 5)
  { Colorize(redd, colorz); }

  if (cube_identityy == 6)
  { Colorize(yelloww, colorz); }

  if (cube_identityy == 7)
  { Colorize(greenn, colorz); }

  if (cube_identityy == 8)
  { Colorize(bluee, colorz); }

  if (cube_identityy == 9)
  { Colorize(orangee, colorz); }

  if (cube_identityy == 10)
  { Colorize(whitee, colorz); }

  if (cube_identityy == 11)
  { Colorize(aquaa, colorz); }

  if (cube_identityy > 11)
  { Colorize(blackk, colorz); }
}

sf::RectangleShape Square_Draw(sf::RectangleShape squaraa, int colourz[], int tranzp,
                               double poz_x, double poz_y, double squarral_x, double squarral_y)
{
  squaraa.setPosition(poz_x - squarral_x, poz_y - squarral_y);
  squaraa.setFillColor(sf::Color(colourz[0], colourz[1], colourz[2], tranzp));

  return squaraa;
}
