#include "violin.h"

Violin::Violin() : StringedInstrument("Violin", 4) {}

void Violin::play() const
{
    std::cout << _name << " " << _numberOfStrings << "-stringed instrument that goes Screech." << std::endl;
}

void Violin::sound() const
{
    std::cout << "Screech" << std::endl;
}