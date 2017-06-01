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

void origin_sprite(sf::Sprite &sprite)
{
    const sf::FloatRect flect
    { sprite.getLocalBounds() };

    const sf::Vector2f half
    { 0.5f*flect.width, 0.5f*flect.height };

    sprite.setOrigin(half);
}

void posit_sprite(sf::Sprite &sprite,
                  const sf::Vector2f &posit)
{ sprite.setPosition(posit); }

void color_sprite(sf::Sprite &sprite,
                  sf::Color &color)
{ sprite.setColor(color); }

void display_sprite(sf::Sprite &sprite,
                    sf::RenderWindow &window) noexcept
{ window.draw(sprite); }
