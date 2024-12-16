#include<iostream>
using namespace std;
int main() {
    int var = 10;
    int *ptr;
    ptr = &var;
    cout << "Value of variable: " << var << endl;
    cout << "Address of variable (stored in pointer): " << ptr << endl;
    cout << "Value stored at the address pointed by the pointer: " << *ptr << endl;
    return 0;
}

