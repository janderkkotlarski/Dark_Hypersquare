#include "choiceweight.h"

choiceweight::choiceweight(const hyperchoice &choice,
                           const unsigned weight)
    : m_choice(choice),
      m_weight(weight)
{ }

choiceweight::~choiceweight()
{ }

std::vector<choiceweight> select_weights(std::vector<hyperchoice> &choices,
                                         std::vector<unsigned> &weights)
{
    std::vector<choiceweight> choights;

    int count
    { 0 };

    for (hyperchoice pick : choices)
    {
        choights.push_back(choiceweight(pick, weights[count]));
        ++count;
    }

    return choights;
}
