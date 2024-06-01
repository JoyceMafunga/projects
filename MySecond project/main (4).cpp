
#include <iostream>
using namespace std;
int main() {
 int numberofElements = 0;
 int* dynamicArray = nullptr;
 
 cout << "how many numbers would you like to type? ";
 cin >> numberofElements;
 dynamicArray = new int[numberofElements];
 
 if (dynamicArray == nullptr){
     cout << "error: memory could not be allocated";
 } else {
     for (int i = 0; i < numberofElements; i++){
     cout << "enter number: ";
     cin >> dynamicArray[i];
     }
     cout << "you've entered: ";
     for (int j = 0; j < numberofElements; j++) {
         cout << dynamicArray[j] << ", ";
     }
     delete[] dynamicArray;
 }
    return 0;
}