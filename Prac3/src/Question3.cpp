#include <iostream>
using namespace std;

void comparePointers() {
    int* p = nullptr;
    double* q = nullptr;

    cout << "p = " << (unsigned long)p << endl;
    cout << "p+1 = " << (unsigned long)(p+1) << endl;
    cout << "q = " << (unsigned long)q << endl;
    cout << "q+1 = " << (unsigned long)(q+1) << endl;
}
