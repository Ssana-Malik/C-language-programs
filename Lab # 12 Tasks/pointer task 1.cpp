/*   Declare a pointer variable.
     Initialize the pointer with the address of a variable.
     Print the value of the variable and the value stored in the pointer.  */
#include<iostream>
using namespace std;
int main() {
    // Declare a variable
    int var = 10;

    // Declare a pointer variable
    int *ptr;

    // Initialize the pointer with the address of the variable
    ptr = &var;

    // Print the value of the variable
    cout << "Value of variable: " << var << endl;

    // Print the value stored in the pointer (address of the variable)
    cout << "Address of variable (stored in pointer): " << ptr << endl;

    // Print the value stored at the address pointed by the pointer
    cout << "Value stored at the address pointed by the pointer: " << *ptr << endl;

    return 0;
}

