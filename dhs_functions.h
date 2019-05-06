#ifndef DHS_FUNCTIONS_H
#define DHS_FUNCTIONS_H

#include <string>
#include <SFML/Graphics.hpp>

void load_texture(sf::Texture& texture, const std::string& file_name);

void init_sprite(sf::Sprite& sprite, sf::Texture& texture,
                 const sf::Vector2f& origin, const sf::Vector2f& position,
                 const sf::Color& color);

#endif // DHS_FUNCTIONS_H
