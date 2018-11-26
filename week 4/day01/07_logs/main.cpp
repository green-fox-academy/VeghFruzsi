#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

// Read all data from 'log.txt'.
// Each line represents a log message from a web server
// Write a function that returns an array with the unique IP adresses.
// Write a function that returns the GET / POST request ratio.

std::vector<std::string> logFiles(std::string basicFile, float ratio);

int main() {
    float result = 1.0;
    logFiles("../log.txt", result);
}

std::vector<std::string> logFiles(std::string basicFile, float ratio) {

    std::ifstream myLogs;
    myLogs.open(basicFile);
    std::string data;
    std::string IP;
    std::string getPost;
    float get = 0;
    float post = 0;
    std::vector<std::string> IPs;

    try {
        if (myLogs.is_open()) {
            while (getline(myLogs, data)) {
                myLogs >> data >> data >> data >> data >> data >> IP >> getPost;
                if (getPost == "GET") {
                    get++;
                } else if (getPost == "POST") {
                    post++;
                }
                if (std::find(IPs.begin(), IPs.end(), IP) == IPs.end()) {
                    IPs.push_back(IP);
                    std::cout << IP << std::endl;
                }
            }
        } else
            throw -85;
    } catch (int
             error) {
        std::cout << "Error: " << error << std::endl;
    }

    ratio = get / post;
    std::cout << "The ratio of Gets and Posts are " << ratio << std::endl;
    myLogs.close();
    return IPs;
}