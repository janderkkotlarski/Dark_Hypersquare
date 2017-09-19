#ifndef CHOICEWEIGHT_H
#define CHOICEWEIGHT_H

#include "enum_classes.h"

class choiceweight
{
    hyperchoice m_choice;
    unsigned m_weight;

public:

    choiceweight(const hyperchoice &choice,
                const unsigned weight);

    ~choiceweight();

    hyperchoice get_choice() const noexcept
    { return m_choice; }

    unsigned get_weight() const noexcept
    { return m_weight; }
};

#endif // CHOICEWEIGHT_H
