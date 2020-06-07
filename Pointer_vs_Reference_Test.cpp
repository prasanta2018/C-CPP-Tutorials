// Pointer vs. Reference

#include<iostream>

using namespace std;

int main() {
    int num1, num2 = 300;

    // creating a pointer pointing to the num1
    int* pNum = &num1;         // Explicit referencing
    *pNum = 100;               // Explicit de-referencing

    // value of variable that the pointer is pointing to
    cout << *pNum << endl;     // 100
    cout << num1 << endl;      // 100

    //Both give the memory address of num1 variable
    cout << &num1 << endl;     // 0x61fec8
    cout << pNum << endl;      // 0x61fec8

    // gives location of pointer
    cout << &pNum << endl;     // 0x61fec0

    // pointer can be reassigned to point to some other address
    pNum = &num2;              // pNum no longer point to num1

    // print the address of num2
    cout << pNum << endl;      // 0x61fec4

    //pointer location is same though points to different variable
    cout << &pNum << endl;     // 0x61fec0


    // creating a reference(alias) to the num1
    int& refNum = num1;        // Implicit referencing (num1, not &num1)
    refNum = 200;              // Implicit de-referencing (just refNum, not *refNum1)
    
    cout << num1 << endl;      // 200
    cout << refNum << endl;    // 200

    // Both &num1 and &refNum give memory address of num1 variable
    cout << &num1 << endl;      // 0x61fec8
    cout << &refNum << endl;    // 0x61fec8

    // This will change num1 and refNum both to the value of num2
    refNum = num2;

    // Reference cannot be re-assigned
    // In other words "invalid conversion from 'int*' to 'int'"
    // refNum = &num2;
    
    return 0;
}