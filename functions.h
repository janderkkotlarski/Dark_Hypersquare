#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <cassert>
#include <iostream>
#include <string>

#include "SFML/Graphics.hpp"

void load_init_image(const std::string &image_name,
                sf::Sprite &sprite,
                sf::Texture &texture);

#endif // FUNCTIONS_H
