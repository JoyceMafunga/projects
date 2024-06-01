#include <iostream>

using namespace std;

int main() {
    // Declaring variables for array dimensions
    int rows, cols;

    // Prompt user for array dimensions maximum  of 3
    cout << "Enter the number of rows (maximum 3): ";
    cin >> rows;
    if (rows > 3) {
        cout << "Maximum number of rows exceeded. Setting rows to 3." << endl;
        rows = 3;
    }

    cout << "Enter the number of columns (maximum 3): ";
    cin >> cols;
    if (cols > 3) {
        cout << "Maximum number of columns exceeded. Setting columns to 3." << endl;
        cols = 3;
    }

    // Dynamically allocate memory for 2D array
    double** arr = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        arr[i] = new double[cols];
    }

    // Assigning values to array elements
    cout << "Enter the values for the array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter value for element [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    // Output the values of each element
    cout << "Values of the dynamically allocated 2D array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "arr[" << i << "][" << j << "] = " << arr[i][j] << endl;
        }
    }

    // Deallocate memory
    for (int i = 0; i < rows; ++i) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
