#ifndef CONTROLS_H
#define CONTROLS_H

#include <SFML/Window.hpp>

class controls
{
    bool m_up;
    bool m_down;
    bool m_right;
    bool m_left;

    const sf::Keyboard::Key m_key_up;
    const sf::Keyboard::Key m_key_down;
    const sf::Keyboard::Key m_key_right;
    const sf::Keyboard::Key m_key_left;

public:

    controls();

    ~controls();

    void check();

    void reset();

    bool get_up()
    { return m_up; }

    bool get_down()
    { return m_down; }

    bool get_right()
    { return m_right; }

    bool get_left()
    { return m_left; }

};

#endif // CONTROLS_H


