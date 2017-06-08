#include "hyperlevel.h"

hyperlevel::hyperlevel(const int level)
    : m_level(level),
      m_size(2*m_level + 1),
      m_squares()
{

}
