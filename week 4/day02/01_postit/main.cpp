#include <iostream>

#include "postit.h"

int main() {

    PostIt postit("Orange", "Idea 1", "Blue");
    std::cout << postit.getBackgroundColor() << " " << postit.getText() << " " << postit.getTextColor() << std::endl;

    PostIt postit1("Pink", "Awesome", "Black");
    std::cout << postit1.getBackgroundColor() << " " << postit1.getText() << " " << postit1.getTextColor() << std::endl;

    PostIt postit2("Yellow", "Superb!", "Green");
    std::cout << postit2.getBackgroundColor() << " " << postit2.getText() << " " << postit2.getTextColor() << std::endl;

    return 0;
}