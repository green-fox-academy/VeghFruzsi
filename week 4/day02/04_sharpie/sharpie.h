#ifndef INC_04_SHARPIE_SHARPIE_H
#define INC_04_SHARPIE_SHARPIE_H
#include <iostream>

class Sharpie {

public:
    Sharpie(std::string color, float width);

    std::string getColor();
    float getWidth();
    float getInkAmount();

    void use();
    void fill();

private:
    std::string _color;
    float _width;
    float _inkAmount;

};


#endif //INC_04_SHARPIE_SHARPIE_H
