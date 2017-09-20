#include "choiceweight.h"

choiceweight::choiceweight(const hyperchoice &choice,
                           const unsigned weight)
    : m_choice(choice),
      m_weight(weight)
{ }

choiceweight::~choiceweight()
{ }

std::vector<choiceweight> select_weights(const std::vector<hyperchoice> &choices,
                                         const std::vector<unsigned> &weights)
{
    assert(choices.size() == weights.size());

    std::vector<choiceweight> choights;

    int count
    { 0 };

    for (const hyperchoice &pick : choices)
    {
        choights.push_back(choiceweight(pick, weights[count]));
        ++count;
    }

    return choights;
}
