#include <iostream>
#include <string>

using namespace std;

int main() {
    int* dynamicInt = new int;

    string* dynamicString = new string;

    // Prompt user for input
    cout << "Enter an integer value: ";
    cin >> *dynamicInt; // Assign value to dynamically allocated integer

    cout << "Enter a string value: ";
    cin.ignore(); 
    getline(cin, *dynamicString);

    // Output 
    cout << "The value of the dynamically allocated integer: " << *dynamicInt << endl;
    cout << "The value of the dynamically allocated string: " << *dynamicString << endl;

    // Deallocating memory
    delete dynamicInt;
    delete dynamicString;

    return 0;
}
