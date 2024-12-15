#include<iostream>
using namespace std;
void findgreatest(){
    int numbers[20];
    int greatest;
    cout << "Enter 20 numbers: " << endl;
    for (int i = 0; i < 20; i++) {
        cin >> numbers[i];
    }
    greatest = numbers[0]; 
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
