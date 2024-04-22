#include <iostream>
#include <string>

int main() {
    // Declare and initialize the array
    std::string elements[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
    int arraySize = sizeof(elements) / sizeof(elements[0]);

    // Iterate through each element and check for those starting with 'B'
    for (int i = 0; i < arraySize; ++i) {
        if (elements[i][0] == 'B') {
            std::cout << elements[i] << std::endl;
        }
    }

    return 0;
}
