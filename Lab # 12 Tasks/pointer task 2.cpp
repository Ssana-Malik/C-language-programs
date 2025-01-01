/*  Swapping Values using Pointers:
   Write a program that swaps the values of two variables using pointers. Ensure that the swap is performed by modifying the values indirectly through pointers.  */
#include <iostream>
using namespace std;
void swapValues(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
int main() {
    int var1 = 10;
    int var2 = 20;

    cout << "Before swapping:" << endl;
    cout << "var1 = " << var1 << endl;
    cout << "var2 = " << var2 << endl;

    // Pass the addresses of var1 and var2 to the swapValues function
    swapValues(&var1, &var2);

    cout << "After swapping:" << endl;
    cout << "var1 = " << var1 << endl;
    cout << "var2 = " << var2 << endl;

    return 0;
}

