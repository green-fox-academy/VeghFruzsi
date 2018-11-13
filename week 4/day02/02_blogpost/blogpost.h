
#ifndef INC_01_POSTIT_POSTIT_H
#define INC_01_POSTIT_POSTIT_H

#include <iostream>


class Postit {
public:
    Postit (std::string backgroundColor, std::string text, std::string textColor);

    ~Postit();

    std::string getBackgroundColor();

    std::string getText();

    std::string getTextColor();


private:
    std::string _backgroundColor;
    std::string _text;
    std::string _textColor;

};


#endif //INC_01_POSTIT_POSTIT_H
