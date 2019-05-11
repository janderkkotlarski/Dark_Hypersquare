#include "dhs_functions.h"

#include <iostream>
#include <cassert>
#include <random>

std::vector < std::vector <int>> init_square_matrix(const int max_level)
{
  std::vector < std::vector <int>> square_matrix;

  std::vector <int> row_zero;

  for (int j{ 0 }; j < 2*max_level + 1; ++j)
  { row_zero.push_back(0); }

  for (int i{ 0 }; i < 2*max_level + 1; ++i)
  { square_matrix.push_back(row_zero); }

  return square_matrix;
}

void fiborand(std::vector <int>& fib_var, int max_var, int fractar)
{
  fib_var.at(2) = fib_var.at(1);
  fib_var.at(1) = fib_var.at(1) + fib_var.at(0);
  fib_var.at(0) = fib_var.at(2);

  if (fib_var.at(1) >= max_var)
  { fib_var.at(1) = fib_var.at(1) - fractar - 1; }
}

std::vector <int> fiboinit(int max_var, int fractar)
{
  std::random_device generator;
  std::uniform_int_distribution<int> distribution(1, fractar);

  int	frac_var = distribution(generator);
  int ran_var = frac_var;

  std::vector <int> fib_var;

  if (ran_var <= 0)
  { ran_var = 1; }

  if (ran_var >= (fractar + 1))
  { ran_var = fractar; }

  fib_var.push_back(ran_var);

  frac_var = distribution(generator);

  ran_var = frac_var;

  if (ran_var <= 0)
  { ran_var = 1; }

  if (ran_var >= (fractar + 1))
  { ran_var = fractar; }

  fib_var.push_back(ran_var);
  fib_var.push_back(0);

  assert(fib_var.size() == 3);
  fiborand(fib_var, max_var, fractar);

  return fib_var;
}

void load_texture(sf::Texture& texture, const std::string& file_name)
{
  assert(file_name != "");

  if (!texture.loadFromFile(file_name))
  { std::cerr << file_name << " not found!\n";	}
}

sf::Vector2f half_sprite_dims(const sf::Sprite& sprite)
{ return sf::Vector2f(0.5f*sprite.getLocalBounds().width,
                      0.5f*sprite.getLocalBounds().height); }

void init_sprite(sf::Sprite& sprite, sf::Texture& texture,
                 const sf::Vector2f& origin, const sf::Vector2f& position)
{
  sprite.setTexture(texture);
  sprite.setOrigin(origin);
  sprite.setPosition(position);
}

void init_sprite(sf::Sprite& sprite, sf::Texture& texture,
                 const sf::Vector2f& origin, const sf::Vector2f& position,
                 const sf::Color& color)
{
  sprite.setTexture(texture);
  sprite.setOrigin(origin);
  sprite.setPosition(position);
  sprite.setColor(color);
}

void init_spritexture(sf::Sprite& sprite, sf::Texture& texture, const std::string& file_name,
                      const sf::Vector2f& origin, const sf::Vector2f& position)
{
  load_texture(texture, file_name);
  init_sprite(sprite, texture, origin, position);
}

void init_spritexture(sf::Sprite& sprite, sf::Texture& texture, const std::string& file_name,
                      const sf::Vector2f& origin, const sf::Vector2f& position, const sf::Color& color)
{
  load_texture(texture, file_name);
  init_sprite(sprite, texture, origin, position, color);
}

void init_vertex_array(sf::VertexArray& vertex_array, const float full_x, const float full_y, const sf::Color& color)
{
  vertex_array[0].position = 0.5f*sf::Vector2f(-full_x, -full_y);
  vertex_array[0].color = color;

  vertex_array[1].position = sf::Vector2f(full_x, -full_y);
  vertex_array[1].color = color;

  vertex_array[2].position = sf::Vector2f(full_x, full_y);
  vertex_array[2].color = color;

  vertex_array[3].position = sf::Vector2f(-full_x, full_y);
  vertex_array[3].color = color;

  vertex_array[0].texCoords = sf::Vector2f(0, 0);
  vertex_array[1].texCoords = sf::Vector2f(full_x, 0);
  vertex_array[2].texCoords = sf::Vector2f(full_x, full_y);
  vertex_array[3].texCoords = sf::Vector2f(0, full_y);
}

std::vector <std::string> number_file_vector(const std::string& begin,
                                             const std::string& end,
                                             const std::string& last)
{
  assert(begin != "");
  assert(end != "");
  assert(last != "");

  std::vector <std::string> number_files;

  for (int i{ 0 }; i < 10; ++i)
  { number_files.push_back(begin + std::to_string(i) + end); }

  number_files.push_back(last);

  return number_files;
}

sf::Color color_divide(const sf::Color& color_a, const int dividor)
{
  assert(dividor > 0);

  const sf::Uint8 divider{ static_cast<sf::Uint8>(dividor)};

  sf::Color color_c;

  color_c.r = color_a.r/divider;
  color_c.g = color_a.g/divider;
  color_c.b = color_a.b/divider;

  return color_c;
}

sf::Color color_add(const sf::Color& color_a, const sf::Color& color_b)
{
  sf::Color color_c;

  color_c.r = color_a.r + color_b.r;
  color_c.g = color_a.g + color_b.g;
  color_c.b = color_a.b + color_b.b;

  return color_c;
}

sf::Color transparent_shader(const sf::Color& color, const int transparency)
{
  sf::Color temp_color{ color };
  temp_color.a = static_cast<sf::Uint8>(transparency);

  return temp_color;
}

void color_picker(int square_identity, sf::Color& colors, sf::Color& multicolor)
{
  sf::Color white{255, 255, 255}, grey{127, 127, 127}, black{0, 0, 0};
  sf::Color red{255, 0, 0}, orange{255, 127, 0}, yellow{255, 255, 0};
  sf::Color green{0, 255, 0}, aqua{0, 255, 255}, blue{0, 0, 255};
  sf::Color violet{127, 0, 255}, dark{24, 24, 24};

  if (square_identity <= 0)
  {	colors = black;	}

  if (square_identity == 1)
  {	colors = grey; }

  if (square_identity == 2)
  {	colors = multicolor; }

  if (square_identity == 3)
  {	colors = dark; }

  if (square_identity == 4)
  {	colors = violet; }

  if (square_identity == 5)
  {	colors = red;	}

  if (square_identity == 6)
  {	colors = yellow; }

  if (square_identity == 7)
  {	colors = green;	}

  if (square_identity == 8)
  {	colors = blue; }

  if (square_identity == 9)
  { colors = orange; }

  if (square_identity == 10)
  {	colors = white; }

  if (square_identity == 11)
  {	colors = aqua; }

  if (square_identity > 11)
  {	colors = black;}
}

void exit_multicolor(sf::Color& color)
{
  int full_int = 255, gate_delta = 5;

  if ((color.r == full_int) && (color.g > 0))
  {
    color.g -= gate_delta;

    if (color.g > full_int)
    { color.g = 0; }
  }

  if ((color.r == full_int) && (color.g == 0) && (color.b < full_int))
  {
    color.b += gate_delta;

    if (color.b > full_int)
    { color.b = static_cast<sf::Uint8>(full_int); }
  }

  if ((color.b == full_int) && (color.r > 0))
  {
    color.r -= gate_delta;

    if (color.r > full_int)
    { color.r = 0; }
  }

  if ((color.b == full_int) && (color.r == 0) && (color.g < full_int))
  {
    color.g += gate_delta;

    if (color.g > full_int)
    { color.g = static_cast<sf::Uint8>(full_int); }
  }

  if ((color.g == full_int) && (color.b > 0))
  {
    color.b -= gate_delta;

    if (color.b > full_int)
    { color.b = 0; }
  }

  if ((color.g == full_int) && (color.b == 0) && (color.r < full_int))
  {
    color.r += gate_delta;

    if (color.r > full_int)
    { color.r = static_cast<sf::Uint8>(full_int); }
  }
}

void background_blinker(bool& background_blink_on, int& background_blink, int max_transp)
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

sf::RectangleShape square_draw(sf::RectangleShape& square, const sf::Color& colours, int transp,
                               float poz_x, float poz_y, float squarral_x, float squarral_y)
{
  sf::Color color{ colours };
  color.a = static_cast<sf::Uint8>(transp);

  square.setPosition(poz_x - squarral_x, poz_y - squarral_y);
  square.setFillColor(color);

  return square;
}


void clear_maze_prng(std::vector <std::vector <int>>& square_matrix, int max_level, int size_level)
{
  assert(2*size_level + 1 <= max_level);

  for (int i{ -size_level }; i <= size_level; ++i)
  {
    for (int j{ -size_level }; j <= size_level; ++j)
    { square_matrix[static_cast<unsigned>(i + size_level)][static_cast<unsigned>(j + size_level)] = 0; }
  }
}

void invis_maze_prng(std::vector <std::vector <int>>& square_matrix, int max_level, int size_level)
{
  assert(2*size_level + 1 <= max_level);

  for (int i{ -size_level }; i <= size_level; ++i)
  {
    for (int j{ -size_level }; j <= size_level; ++j)
    {
      if (square_matrix[static_cast<unsigned>(i + size_level)][static_cast<unsigned>(j + size_level)] == 1)
      { square_matrix[static_cast<unsigned>(i + size_level)][static_cast<unsigned>(j + size_level)] = -1; }
    }
  }
}

void invis_walls_prng(std::vector <std::vector <int>>& square_matrix, int max_level, int size_level)
{
  assert(2*size_level + 1 <= max_level);

  for (int i{ -size_level }; i <= size_level; ++i)
  {
    for (int j{ -size_level }; j <= size_level; ++j)
    {
      if (((((abs(i) % 2) == 0) && ((abs(j) % 2) == 1)) ||
        (((abs(i) % 2) == 1) && ((abs(j) % 2) == 0))) &&
        (j != 0) &&
        (square_matrix[static_cast<unsigned>(i + size_level)][static_cast<unsigned>(j + size_level)] == 1))
      { square_matrix[static_cast<unsigned>(i + size_level)][static_cast<unsigned>(j + size_level)] = -1; }
    }
  }
}

void dark_maze_prng(std::vector <std::vector <int>>& square_matrix, int max_level, int size_level, int clear_radius,
bool half_gone, bool pillars_exist, bool wall_exist, bool zero_wall, bool wall_concrete, bool exit_exist, bool dark_exist,
std::vector <int>& fib_val, int max_val, int fractal, float wall_frac, float dark_frac, float exit_frac,
float candy_frac, float red_candy_frac, float yellow_candy_frac, float green_candy_frac)
{
  assert(2*size_level + 1 <= max_level);

  for (int i{ -size_level }; i <= size_level; ++i)
  {
    for (int j{ -size_level }; j <= size_level; ++j)
    {
      square_matrix[static_cast<unsigned>(i + size_level)][static_cast<unsigned>(j + size_level)] = 0;

      if (((abs(i) % 2) == 1) && ((abs(j) % 2) == 1) && pillars_exist &&
        (((abs(i) > (size_level/2)) || (abs(j) > (size_level/2))) ||
        !half_gone) &&
        pillars_exist)
      { square_matrix[static_cast<unsigned>(i)][static_cast<unsigned>(j)] = 1; }

      if (((abs(i) % 2) == 0) && ((abs(j) % 2) == 0) &&
        ((i != 0) || (j != 0)))
      {
        if ((1.0f*fib_val[0]) < candy_frac*(1.0f*max_val))
        {
          if ((1.0f*fib_val[0]) < red_candy_frac*(1.0f*max_val))
          { square_matrix[static_cast<unsigned>(i + size_level)][static_cast<unsigned>(j + size_level)] = 5; }

          if (((1.0f*fib_val[0]) > (red_candy_frac)*(1.0f*max_val)) &&
            ((1.0f*fib_val[0]) < (red_candy_frac + yellow_candy_frac)*(1.0f*max_val)))
          { square_matrix[static_cast<unsigned>(i + size_level)][static_cast<unsigned>(j + size_level)] = 6; }

          if (((1.0f*fib_val[0]) > (red_candy_frac + yellow_candy_frac)*(1.0f*max_val)) &&
            ((1.0f*fib_val[0]) < (red_candy_frac + yellow_candy_frac + green_candy_frac)*(1.0f*max_val)))
          { square_matrix[static_cast<unsigned>(i + size_level)][static_cast<unsigned>(j + size_level)] = 7; }

          if (((1.0f*fib_val[0]) > (red_candy_frac + yellow_candy_frac + green_candy_frac)*(1.0f*max_val)) &&
            ((1.0f*fib_val[0]) < (candy_frac)*(1.0f*max_val)))
          { square_matrix[static_cast<unsigned>(i + size_level)][static_cast<unsigned>(j + size_level)] = 8; }
        }

        if (((1.0f*fib_val[0]) > (1.0f - dark_frac)*(1.0f*max_val)) &&
          (((abs(i) > (size_level/2)) || (abs(j) > (size_level/2))) ||
          (!half_gone && ((abs(i) > clear_radius) || (abs(j) > clear_radius)))) &&
          dark_exist)
        { square_matrix[static_cast<unsigned>(i + size_level)][static_cast<unsigned>(j + size_level)] = 3; }

        if (((1.0f*fib_val[0]) > (0.75f - 0.5f*exit_frac)*(1.0f*max_val)) &&
          ((1.0f*fib_val[0]) < (0.75f + 0.5f*exit_frac)*(1.0f*max_val)) &&
          (((abs(i) > (size_level/2)) || (abs(j) > (size_level/2))) ||
          (!half_gone && ((abs(i) > clear_radius) || (abs(j) > clear_radius)))) &&
          exit_exist)
        { square_matrix[static_cast<unsigned>(i + size_level)][static_cast<unsigned>(j + size_level)] = 2; }

        fiborand(fib_val, max_val, fractal);
      }

      if (((((abs(i) % 2) == 0) && ((abs(j) % 2) == 1)) ||
        (((abs(i) % 2) == 1) && ((abs(j) % 2) == 0))) &&
        (((abs(i) > (size_level/2)) || (abs(j) > (size_level/2))) ||
        (!half_gone && ((abs(i) > clear_radius) || (abs(j) > clear_radius)))) &&
        wall_exist)
      {
        if ((1.0f*fib_val[0]) < wall_frac*(1.0f*max_val))
        {
          square_matrix[static_cast<unsigned>(i + size_level)][static_cast<unsigned>(j + size_level)] = 10;

          if (wall_concrete)
          { square_matrix[static_cast<unsigned>(i + size_level)][static_cast<unsigned>(j + size_level)] = 1; }
        }

        fiborand(fib_val, max_val, fractal);
      }

      if ((j == 0) && zero_wall)
      { square_matrix[static_cast<unsigned>(i + size_level)][static_cast<unsigned>(j + size_level)] = 1; }

      // std::cout << "[" << a_sub << "-" << b_sub << ":" << square_matrix[a_sub + max_level][b_sub + max_level] << "] ";
    }

    // std::cout << "\n";
  }
}
