// Call by Pointer vs Reference

#include<iostream>

using namespace std;

// Function takes an int pointer (non-const)
void SquareUsingPtr(int* pNumber)
{
    cout << "In SquareUsingPtr(): " << endl;
    cout << "Address(num) = " << pNumber << endl;   // 0x61fecc
    *pNumber *= *pNumber;                           // Explicit de-referencing to get the value pointed-to
}

// Function takes an int reference (non-const)
void SquareUsingRef(int& rNumber)
{
    cout << "In SquareUsingRef(): " << endl;
    cout << "Address(num) = " << &rNumber << endl;  // 0x61fecc
    rNumber *= rNumber;                             // Implicit de-referencing (without '*')
}

int main() {
    int num = 10;
    cout << "In main():" << endl;
    cout << "num = " << num << " Address(num) = " << &num << endl; // 10 0x61fecc

    // Call by pointer or adress
    cout << "Calling to SquareUsingPtr() ..." << endl;
    SquareUsingPtr(&num);                    // Explicit referencing to pass an address
    cout << "Back to main():" << endl;
    cout << "num = " << num << endl;        // 100

    // Call by reference
    cout << "Calling to SquareUsingRef() ..." << endl;
    SquareUsingRef(num);                    // Implicit referencing (without '&')
    cout << "In main():" << endl;
    cout << "num = " << num << endl;        // 10000

    return 0;
}
