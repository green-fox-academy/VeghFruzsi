#include "counter.h"

Counter::Counter() {
    _number = 0;
    _initNum = 0;
}

Counter::Counter(int number) {
    _number = number;
    _initNum = number;
}

void Counter::add(int number) {
    _number+=number;
}

void Counter::add(){
    _number++;
}

int Counter::get() {
    return _number;
}

void Counter::reset() {
    _number = _initNum;
}