#include <iostream>
#include <string>

    std::string greet(std::string name);

int main(int argc, char* args[]) {

    // - Create a string variable named `al` and assign the value `Greenfox` to it
    // - Create a function called `greet` that greets it's input parameter
    // - Greeting is printing e.g. `Greetings dear, Greenfox`
    // - Greet `al`
    std::string al = "Greenfox";
    greet (al);

    return 0;
}

    std::string greet(std::string name){
    std::cout << "Greeting dear, " << name << std::endl;
}

/*int main(int argc, char* args[]) {

    int baseNum = 123;
    std::cout << doubling(baseNum) << std::endl;

    return 0;
}

int doubling(int baseNum)
{
    return baseNum * 2;
}

void sayGreen();
void sayFox();

int main(int argc, char* args[]) {
    sayGreen();
    std::cout << "Hello from main()" << std::endl;
    return 0;
}

void sayGreen() {
    std::cout << "Green ";
    sayFox();
    std::cout << "Hello from sayGreen()" << std::endl;
}

void sayFox() {
    std::cout << "Fox" << std::endl;
    std::cout << "Hello from sayFox()" << std::endl;
}*/