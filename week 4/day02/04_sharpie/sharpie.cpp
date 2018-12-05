#include "sharpie.h"

Sharpie::Sharpie(std::string color, float width)
{
    _color = color;
    _width = width;
    _inkAmount = 100;
}

std::string Sharpie::getColor()
{
    return _color;
}

float Sharpie::getWidth()
{
    return _width;
}

float Sharpie::getInkAmount()
{
    return _inkAmount;
}

void Sharpie::use()
{
    _inkAmount -= 12;
}

void Sharpie::fill()
{
    _inkAmount += 10;
}
