#include "functions.h"

void load_image(const std::string &image_name,
                     sf::Sprite &sprite,
                     sf::Texture &texture)
{
    assert(image_name != "");

    if (!texture.loadFromFile(image_name))
    { std::cout << image_name << " not found!\n"; }

    sprite.setTexture(texture);    
}

