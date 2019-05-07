#ifndef DHS_FUNCTIONS_H
#define DHS_FUNCTIONS_H

#include <string>
#include <vector>

#include <SFML/Graphics.hpp>

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



#endif // DHS_FUNCTIONS_H
