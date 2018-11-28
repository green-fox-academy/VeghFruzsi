#include "electricguitar.h"

ElectricGuitar::ElectricGuitar() : StringedInstrument("Electric Guitar", 6) {}

ElectricGuitar::ElectricGuitar(int numberOfStrings): StringedInstrument("Electric Guitar", numberOfStrings) {}

void ElectricGuitar::play() const {
    std::cout << _name << " " << _numberOfStrings << "-stringed instrument that goes Twang."  << std::endl;
}

void ElectricGuitar::sound()const {
    std::cout << "Twang" << std::endl;
}