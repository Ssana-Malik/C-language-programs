#include<iostream>
using namespace std;
int square(int num) {
    return num * num;
}
int main() {
    int (*squarePtr)(int);
    squarePtr = square;
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int result = (*squarePtr)(num);
    cout << "The square of " << num << " is " << result << endl;
    return 0;
}



