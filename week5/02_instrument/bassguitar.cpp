#include "bassguitar.h"

BassGuitar::BassGuitar() : StringedInstrument("Bass Guitar", 4) {}

BassGuitar::BassGuitar(int numberOfStrings): StringedInstrument("Bass Guitar", numberOfStrings) {}

void BassGuitar::play() const
{
    std::cout << _name << " " << _numberOfStrings << "-stringed instrument that goes Duum-duum-duum." << std::endl;
}

void BassGuitar::sound() const
{
    std::cout << "Duum-duum-duum" << std::endl;
}
