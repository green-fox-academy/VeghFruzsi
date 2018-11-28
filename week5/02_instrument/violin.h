#ifndef INC_02_INSTRUMENT_VIOLIN_H
#define INC_02_INSTRUMENT_VIOLIN_H

#include "stringedinstrument.h"

class Violin : public StringedInstrument
{

public:
    Violin();
    void play() const;
    void sound() const;
};

#endif //INC_02_INSTRUMENT_VIOLIN_H
