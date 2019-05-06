#include "dhs_functions.h"

#include <iostream>
#include <cassert>

void load_texture(sf::Texture& texture, const std::string& file_name)
{
  assert(file_name != "");

  if (!texture.loadFromFile(file_name))
  { std::cerr << file_name << " not found!\n";	}
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
