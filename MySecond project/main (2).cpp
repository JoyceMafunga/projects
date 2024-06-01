
#include <iostream>
using namespace std;
int main() {
    int numbersarray[5];
    int * ppointer = nullptr;
    
    ppointer = numbersarray;
    
    *ppointer = 10;
    ppointer++;
    
    *ppointer =20;
    
    ppointer = &numbersarray[2];
    *ppointer = 30;
    ppointer = numbersarray + 3;
    *ppointer = 40;
    
    ppointer = numbersarray;
    *(ppointer + 4) = 50;
    
    for (int n = 0; n < 5; n++)
    {
        cout << numbersarray[n] << ", ";
    }
    return 0;
}