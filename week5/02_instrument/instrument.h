#ifndef INC_02_INSTRUMENT_INSTRUMENT_H
#define INC_02_INSTRUMENT_INSTRUMENT_H

#include <iostream>

class Instrument
{

public:
    Instrument(std::string name);
    virtual void play() const = 0;
    virtual void sound() const = 0;

protected:
    std::string _name;
};

#endif //EX_01_INSTRUMENTS_INSTRUMENT_H

