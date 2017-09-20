#ifndef CHOICEWEIGHT_H
#define CHOICEWEIGHT_H

#include <cassert>
#include <vector>

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

std::vector<choiceweight> select_weights(const std::vector<hyperchoice> &choices,
                                         const std::vector<unsigned> &weights);

#endif // CHOICEWEIGHT_H
