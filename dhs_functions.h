#ifndef DHS_FUNCTIONS_H
#define DHS_FUNCTIONS_H

#include <string>
#include <vector>

#include <SFML/Graphics.hpp>

void fiborand(std::vector <int>& fib_var, int max_var, int fractar);

std::vector <int> fiboinit(int max_var, int fractar);

void load_texture(sf::Texture& texture, const std::string& file_name);

sf::Vector2f half_sprite_dims(const sf::Sprite& sprite);


void init_sprite(sf::Sprite& sprite, sf::Texture& texture,
                 const sf::Vector2f& origin, const sf::Vector2f& position);

void init_sprite(sf::Sprite& sprite, sf::Texture& texture,
                 const sf::Vector2f& origin, const sf::Vector2f& position,
                 const sf::Color& color);

void init_vertex_array(sf::VertexArray& vertex_array, const float full_x, const float full_y, const sf::Color& color);

std::vector <std::string> number_file_vector(const std::string& begin,
                                             const std::string& end,
                                             const std::string& last);

void color_picker(int square_identity, sf::Color& colors, sf::Color& multicolor);

void background_blinker(bool& background_blink_on, int& background_blink, int max_transp);

void clear_maze_prng(std::vector <std::vector <int>>& square_matrix, int max_level, int size_level);

void invis_maze_prng(std::vector <std::vector <int>>& square_matrix, int max_level, int size_level);

void invis_walls_prng(std::vector <std::vector <int>>& square_matrix, int max_level, int size_level);

void dark_maze_prng(std::vector <std::vector <int>>& square_matrix, int max_level, int size_level, int clear_radius,
bool half_gone, bool pillars_exist, bool wall_exist, bool zero_wall, bool wall_concrete, bool exit_exist, bool dark_exist,
std::vector <int>& fib_val, int max_val, int fractal, float wall_frac, float dark_frac, float exit_frac,
float candy_frac, float red_candy_frac, float yellow_candy_frac, float green_candy_frac, float blue_candy_frac);

#endif // DHS_FUNCTIONS_H
