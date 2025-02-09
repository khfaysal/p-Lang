#include <iostream>
#include <sstream>

int main() {
    std::string input;
    std::cout << "Enter time (HH : MM : SS): ";
    std::getline(std::cin, input);  // Taking input as a string

    std::stringstream ss(input);
    int hours, minutes, seconds;
    char colon1, colon2;

    // Parsing the input
    ss >> hours >> colon1 >> minutes >> colon2 >> seconds;

    // Checking if the input is in correct format
    if (colon1 == ':' && colon2 == ':') {
        std::cout << "Hours: " << hours << std::endl;
        std::cout << "Minutes: " << minutes << std::endl;
        std::cout << "Seconds: " << seconds << std::endl;
    } else {
        std::cout << "Invalid time format. Please enter in HH : MM : SS format." << std::endl;
    }

    return 0;
}
