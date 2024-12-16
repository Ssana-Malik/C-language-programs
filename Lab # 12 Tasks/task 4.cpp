#include <iostream>
using namespace std;
int main() {
    // Initialize a variable var to 5
    int var = 5;

    // Declare a pointer pointVar and assign the address of var

   int *pointVar = &var;

    // Print the original value of var
    cout << "var = " << var << endl;

    // Print the address of var
    cout << "Address of var = " << &var << endl;

    // Print the value stored in the pointer pointVar (address of var)
    cout << "pointVar = " << pointVar << endl;

    // Print the content of the address pointed to by pointVar (value of var)
    cout << "Content of the address pointed to by pointVar (*pointVar) = " << *pointVar << endl;

    // Prompt the user to enter a new value for var through the pointer pointVar
    cout << "Enter a new value for var: ";
    cin >> *pointVar;

    // Print the updated value of var
    cout << "Updated var = " << var << endl;
    return 0;
}

