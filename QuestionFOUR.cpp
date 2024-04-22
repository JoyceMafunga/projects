#include <iostream>
#include <string>
#include <sstream>

int main() {
    int userInput;
    bool validInput = false;

    while (!validInput) {
        std::cout << "Please enter an integer value between 5 and 10: ";
        std::string input;
        std::getline(std::cin, input);

        // Check if input is a valid integer
        std::stringstream ss(input);
        if (ss >> userInput) {
            // Check if input is between 5 and 10
            if (userInput >= 5 && userInput <= 10) {
                validInput = true;
            } else {
                std::cout << "Invalid input. Please enter an integer value between 5 and 10." << std::endl;
            }
        } else {
            std::cout << "Invalid input. Please enter an integer value between 5 and 10." << std::endl;
        }
    }

    std::cout << "Your input value (" << userInput << ") has been accepted." << std::endl;

    return 0;
}
