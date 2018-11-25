#ifndef DICESET_DICESET_H
#define DICESET_DICESET_H

#include <iostream>
#include <vector>

class DiceSet
{
public:

    DiceSet();

    void roll();
    void roll(int i);
    std::vector<int> getCurrent() const;
    int getCurrent(int i) const;
private:
    std::vector<int> dices;
};


#endif //DICESET_DICESET_H
