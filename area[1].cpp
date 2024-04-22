#include <iostream>
#include <string>

using namespace std;

double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}

double calculateRectangleArea(double length, double width) {
    return length * width;
}

double calculateSquareArea(double side) {
    return side * side;
}

int main() {
    while (true) {
        int choice;
        double base, height, length, width, side;

        cout << "Select the shape to calculate the area for:\n";
        cout << "1. Triangle\n";
        cout << "2. Rectangle\n";
        cout << "3. Square\n";
        cout << "4. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter the base and height of the triangle: ";
            cin >> base >> height;
            cout << "The area of the triangle is: " << calculateTriangleArea(base, height) << endl;
        } else if (choice == 2) {
            cout << "Enter the length and width of the rectangle: ";
            cin >> length >> width;
            cout << "The area of the rectangle is: " << calculateRectangleArea(length, width) << endl;
        } else if (choice == 3) {
            cout << "Enter the side length of the square: ";
            cin >> side;
            cout << "The area of the square is: " << calculateSquareArea(side) << endl;
        } else if (choice == 4) {
            break;
        } else {
            cout << "Invalid input. Please enter a valid choice." << endl;
        }
    }

    return 0;
}