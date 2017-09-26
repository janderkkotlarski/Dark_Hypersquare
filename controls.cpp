#include "controls.h"

controls::controls()
    : m_up(false),
      m_down(false),
      m_right(false),
      m_left(false),
      m_key_up(sf::Keyboard::W),
      m_key_down(sf::Keyboard::S),
      m_key_right(sf::Keyboard::D),
      m_key_left(sf::Keyboard::A)
{ }

controls::~controls()
{ }

void controls::check()
{
    if (sf::Keyboard::isKeyPressed(m_key_up) &&
        !m_up)
    { m_up = true; }

    if (sf::Keyboard::isKeyPressed(m_key_down) &&
        !m_down)
    { m_down = true; }

    if (sf::Keyboard::isKeyPressed(m_key_right) &&
        !m_right)
    { m_right = true; }

    if (sf::Keyboard::isKeyPressed(m_key_left) &&
        !m_left)
    { m_left = true; }
}

void controls::reset()
{
    m_up = false;
    m_down = false;
    m_right = false;
    m_left = false;
}
