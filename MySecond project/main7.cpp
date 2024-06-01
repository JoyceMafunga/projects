
#include <iostream>
using namespace std;
int main() {
    int* ppointer = nullptr;
    
    int integervar = 5;
    
    ppointer = &integervar;
    cout << "integervar: " <<integervar <<endl;
    
    cout << "address of integervar: " << &integervar <<endl;
    
    cout << "ppointer: "<< ppointer + 1 << endl;
    cout << "address of ppointer: " << &ppointer << endl;
    return 0;
}