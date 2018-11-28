#include "stringedinstrument.h"
#include "instrument.h"

StringedInstrument::StringedInstrument(std::string name, int numberOfStrings) : Instrument(name), _numberOfStrings(numberOfStrings) {};