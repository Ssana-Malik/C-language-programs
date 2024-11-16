// C++ program that uses an array to prompt the user to input three integer values and prints these values in both forward and reversed order.
#include <iostream>
using namespace std;
int main() {
    const int size = 3;
    int arr[size];
    cout << "Enter three integer values:\n";
    for (int i = 0; i < size; i++) {
        cout << "Value " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "\nForward Order: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\nReversed Order: ";
    for (int i = size - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    return 0;
}

