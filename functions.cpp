#include "functions.h"

void load_init_image(const std::string &image_name,
                     sf::Sprite &sprite,
                     sf::Texture &texture)
{
    assert(image_name != "");

    if (!texture.loadFromFile(image_name))
    { std::cout << image_name << " not found!\n"; }

    sprite.setTexture(texture);

    const sf::FloatRect flect
    { sprite.getLocalBounds() };

    const sf::Vector2f half
    { 0.5f*flect.width, 0.5f*flect.height };

    sprite.setOrigin(half);
}
