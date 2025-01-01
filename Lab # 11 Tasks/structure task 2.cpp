//  write a function that reads the 20 values from the user and prints the greatest one. 
#include<iostream>
using namespace std;
void findgreatest(){
    int numbers[20];
    cout << "Enter 20 numbers: " << endl;
    for (int i = 0; i < 20; i++) {
        cin >> numbers[i];
    }
    int greatest = numbers[0]; 
    for (int i = 1; i < 20; i++) {
        if (numbers[i] > greatest) {
            greatest = numbers[i]; 
        }
    }
    cout << "The greatest value is: " << greatest << endl;
}
int main() {
    findgreatest();
    return 0;
}
