#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}#include <iostream>

#include "postit.h"

int main() {

    Postit postit("Orange", "Idea 1", "Blue");
    Postit postit1("Pink", "Awesome", "Black");
    Postit postit2("Yellow", "Superb!", "Green");


    std::cout << postit.getBackgroundColor() << " " << postit.getText() << " " << postit.getTextColor() << std::endl;
    std::cout << postit1.getBackgroundColor() << " " << postit1.getText() << " " << postit1.getTextColor() << std::endl;
    std::cout << postit2.getBackgroundColor() << " " << postit2.getText() << " " << postit2.getTextColor() << std::endl;

    return 0;
}