#include "hyperlevel.h"

hyperlevel::hyperlevel(const int level)
    : m_level(level),
      m_size(2*m_level + 1),
      m_squares()
{
    assert(m_level > 0);
    assert(m_size > 0);

    for (int x_pos { 0 }; x_pos < m_size; ++x_pos)
    {
        std::vector <hypersquare> square_column;

        for (int y_pos { 0 }; y_pos < m_size; ++y_pos)
        {
            square_column.push_back(hypersquare({x_pos, y_pos}));
        }

        assert(static_cast<int>(square_column.size()) == m_size);

        m_squares.push_back(square_column);

        assert(static_cast<int>(m_squares[x_pos].size()) == m_size);
    }

    assert(static_cast<int>(m_squares.size()) == m_size);
}
