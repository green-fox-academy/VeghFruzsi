#ifndef INC_02_INSTRUMENT_BASSGUITAR_H
#define INC_02_INSTRUMENT_BASSGUITAR_H

#include "stringedinstrument.h"

class BassGuitar : public StringedInstrument
{
public:
    BassGuitar();
    BassGuitar(int numberOfStrings);
    void play() const;
    void sound() const;

};

#endif //INC_02_INSTRUMENT_BASSGUITAR_H
