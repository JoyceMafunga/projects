#include <iostream>
using namespace std;
int main(){
    int* ppointer = nullptr;
    int numbersArray[3] = {10, 20, 30};
    ppointer = numbersArray;
    cout << "Address at ppointer:" <<  ppointer << endl;
    cout << " address of numbersArray[0]:" << numbersArray << endl;
    cout << "value at ppointer:" << *ppointer << endl;
    cout << "value at ++ppointer:" <<  *(++ppointer) << endl;
    ppointer = numbersArray;
    cout << "value at ppointer++:" << *(ppointer++) << endl;
    return 0;