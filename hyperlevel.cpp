#include "hyperlevel.h"

hyperlevel::hyperlevel(const int level)
    : m_level(level),
      m_size(2*m_level + 1),
      m_player({m_level, m_level}),
      m_squares()
{
    assert(m_level > 0);
    assert(m_size > 0);

    for (int y_pos { 0 }; y_pos < m_size; ++y_pos)
    {
        std::vector <hypersquare> square_row;

        for (int x_pos { 0 }; x_pos < m_size; ++x_pos)
        {
            square_row.push_back(hypersquare({x_pos, y_pos}));
        }

        assert(static_cast<int>(square_row.size()) == m_size);

        m_squares.push_back(square_row);

        assert(static_cast<int>(m_squares[y_pos].size()) == m_size);
    }

    assert(static_cast<int>(m_squares.size()) == m_size);
}

hyperlevel::hyperlevel(const int level,
                       fibran &ranfib)
    : m_level(level),
      m_size(2*m_level + 1),
      m_player({m_level, m_level}),
      m_squares()
{
    assert(m_level > 0);
    assert(m_size > 0);

    for (int y_pos { 0 }; y_pos < m_size; ++y_pos)
    {
        std::vector <hypersquare> square_row;

        for (int x_pos { 0 }; x_pos < m_size; ++x_pos)
        {
            if ((abs(x_pos - level) > 3) || (abs(y_pos - level) > 3))
            {
                if ((abs(x_pos - level) % 2 == 0) && (abs(y_pos - level) % 2 == 0))
                { square_row.push_back(hypersquare({x_pos, y_pos}, hypertype::concrete, hypercolor::gray)); }
                else if (((abs(x_pos - level) + abs(y_pos - level)) % 2) == 1)
                { square_row.push_back(hypersquare({x_pos, y_pos}, ranfib)); }
                else
                { square_row.push_back(hypersquare({x_pos, y_pos}, hypertype::none, hypercolor::clear)); }
            }
            else
            { square_row.push_back(hypersquare({x_pos, y_pos}, hypertype::none, hypercolor::clear)); }
        }

        assert(static_cast<int>(square_row.size()) == m_size);

        m_squares.push_back(square_row);

        assert(static_cast<int>(m_squares[y_pos].size()) == m_size);
    }

    assert(static_cast<int>(m_squares.size()) == m_size);
}


hyperlevel::hyperlevel(const int level,
                       const bool luck,
                       fibran &ranfib)
    : m_level(level),
      m_size(2*m_level + 1),
      m_player({m_level, m_level}),
      m_squares()
{
    assert(m_level > 0);
    assert(m_size > 0);

    for (int y_pos { 0 }; y_pos < m_size; ++y_pos)
    {
        std::vector <hypersquare> square_row;

        for (int x_pos { 0 }; x_pos < m_size; ++x_pos)
        {
            if ((abs(x_pos - level) > 3) || (abs(y_pos - level) > 3))
            {
                if ((abs(x_pos - level) % 2 == 0) && (abs(y_pos - level) % 2 == 0))
                { square_row.push_back(hypersquare({x_pos, y_pos}, hypertype::concrete, hypercolor::gray)); }
                else if (((abs(x_pos - level) + abs(y_pos - level)) % 2) == 1)
                { square_row.push_back(hypersquare({x_pos, y_pos}, luck, ranfib)); }
                else
                { square_row.push_back(hypersquare({x_pos, y_pos}, hypertype::none, hypercolor::clear)); }
            }
            else
            { square_row.push_back(hypersquare({x_pos, y_pos}, hypertype::none, hypercolor::clear)); }
        }

        assert(static_cast<int>(square_row.size()) == m_size);

        m_squares.push_back(square_row);

        assert(static_cast<int>(m_squares[y_pos].size()) == m_size);
    }

    assert(static_cast<int>(m_squares.size()) == m_size);
}

void hyperlevel::textdisp()
{
    for( std::vector <hypersquare> square_row: m_squares )
    {
        for ( hypersquare square: square_row )
        {
            if (square.get_posit() == m_player.get_posit())
            { textout(m_player.get_color()); }
            else
            { textout(square.get_color()); }
        }

        std::cout << '\n';
    }
}
