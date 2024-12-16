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
    swapValues(&var1, &var2);
    cout << "After swapping:" << endl;
    cout << "var1 = " << var1 << endl;
    cout << "var2 = " << var2 << endl;
    return 0;
}
