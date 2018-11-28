#ifndef INC_02_INSTRUMENT_ELECTRICGUITAR_H
#define INC_02_INSTRUMENT_ELECTRICGUITAR_H


#include "stringedinstrument.h"

class ElectricGuitar : public StringedInstrument {
public:
    ElectricGuitar();
    explicit ElectricGuitar(int numberOfStrings);
    void play() const;
    void sound() const;
};


#endif //INC_02_INSTRUMENT_ELECTRICGUITAR_H
