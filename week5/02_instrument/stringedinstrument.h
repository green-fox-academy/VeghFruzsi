#ifndef INC_02_INSTRUMENT_STRINGEDINSTRUMENT_H
#define INC_02_INSTRUMENT_STRINGEDINSTRUMENT_H

#include <iostream>
#include "instrument.h"

class StringedInstrument : public Instrument
{

public:
    StringedInstrument(std::string name, int numberOfStrings);
    virtual void sound() const = 0;
    virtual void play() const = 0;

protected:
    int _numberOfStrings;

};

#endif //INC_02_INSTRUMENT_STRINGEDINSTRUMENT_H
