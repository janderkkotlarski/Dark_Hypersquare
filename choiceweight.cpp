#include "choiceweight.h"

choiceweight::choiceweight(const hyperchoice &choice,
            const unsigned weight)
    : m_choice(choice),
      m_weight(weight)
{ }

choiceweight::~choiceweight()
{ }
