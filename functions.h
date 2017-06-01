#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <cassert>
#include <iostream>
#include <string>

#include "SFML/Graphics.hpp"

void load_init_image(const std::string &image_name,
                sf::Sprite &sprite,
                sf::Texture &texture);

void origin_sprite(sf::Sprite &sprite);

void posit_sprite(sf::Sprite &sprite,
                  const sf::Vector2f &posit);

void color_sprite(sf::Sprite &sprite,
                  sf::Color &color);

void display_sprite(sf::Sprite &sprite,
                    sf::RenderWindow &window) noexcept;

#endif // FUNCTIONS_H
