#include <iostream>
#include <fstream>
#include <vector>
#include <ctype.h>
#include<stdlib.h>
#include<time.h>

bool readFile(std::vector<std::string> &words);

bool checkWord(std::string word);

std::string chooseWord(std::vector<std::string> &words);

char getUserInput();

bool checkInput(std::string input);

bool isInputFoundInWord(std::string word, char input, std::string &result);

void drawSticks(int counter);

bool isGameOver(std::string result, int mistakeCounter);

int main()
{
    srand(time(NULL));
    std::vector<std::string> words;
    std::vector<char> badCharacters;

    if (!readFile(words)) {
        return 2;
    }

    std::string word = chooseWord(words);

    std::string progress;

    for (int i = 0; i < word.size(); ++i) {
        progress += '_';
    }

    bool gameOver;
    int mistakeCounter = 0;

    do {
        drawSticks(mistakeCounter);

        for (char c : progress) {
            std::cout << c << " ";
        }
        std::cout << std::endl;

        for (char c : badCharacters) {
            std::cout << c << ",";
        }
        std::cout << std::endl;

        char input = getUserInput();
        if (!isInputFoundInWord(word, input, progress)) {
            mistakeCounter++;
            badCharacters.push_back(input);
        }


        gameOver = isGameOver(progress, mistakeCounter);

    } while (!gameOver);

    drawSticks(mistakeCounter);
    std::cout << "Solution: " << word << std::endl;

    return 0;
}

bool readFile(std::vector<std::string> &words)
{
    std::string line;
    std::ifstream myFile("words.txt");
    if (myFile.is_open()) {
        while (getline(myFile, line)) {
            if (checkWord(line)) {
                words.push_back(line);
            }
        }

        myFile.close();

        return true;
    } else {
        std::cout << "Unable to open file" << std::endl;
        return false;
    }
}

bool checkWord(std::string word)
{
    if (word.length() < 5) {
        return false;
    }

    for (int i = 0; i < word.length(); ++i) {
        if (!isalpha(word[i]) || !islower(word[i])) {
            return false;
        }
    }

    return true;
}

std::string chooseWord(std::vector<std::string> &words)
{
    int random = rand();

    std::cout << words.size() << std::endl;
    std::cout << random << std::endl;
    std::cout << random % words.size() << std::endl;
    return words[random % words.size()];
}

char getUserInput()
{
    std::string input;

    bool isInputRight;
    do {
        std::cout << "Please give me a character: " << std::endl;
        std::cin >> input;
        isInputRight = checkInput(input);

    } while (!isInputRight);

    return input[0];
}

bool checkInput(std::string input)
{
    if (input.size() != 1) {
        return false;
    }

    if (!isalpha(input[0]) || !islower(input[0])) {
        return false;
    }

    return true;
}

bool isInputFoundInWord(std::string word, char input, std::string &result)
{
    bool isFound = false;
    for (int i = 0; i < word.size(); ++i) {
        if (word[i] == input) {
            result[i] = input;
            isFound = true;
        }
    }

    return isFound;
}

void drawSticks(int counter)
{
    std::cout << "    _ _" << std::endl;
    std::cout << "   |  |" << std::endl;
    std::cout << "   |  " << ((counter >= 1) ? "O" : "") << std::endl;
    std::cout << "   | " << ((counter >= 4) ? "\\" : " ") << ((counter >= 2) ? "|" : "") << ((counter >= 5) ? "/" : "")
              << std::endl;
    std::cout << "   |  " << ((counter >= 3) ? "|" : "") << std::endl;
    std::cout << "   | " << ((counter >= 6) ? "/" : "") << " " << ((counter >= 7) ? "\\" : "") << std::endl;
    std::cout << "   |" << std::endl;
    std::cout << "_ _|_ _" << std::endl;

}

bool isGameOver(std::string result, int mistakeCounter)
{
    return mistakeCounter >= 7 || result.find("_") == std::string::npos;
}
