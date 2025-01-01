//Write a program that simulates an ATM. The user will enter an initial balance, and then the program will repeatedly ask the user how much they want to withdraw. The loop continues until the balance is insufficient for the withdrawal or the user enters a withdrawal amount of 0 (to exit).
#include <iostream>
using namespace std;
int main(){
    float balance; 
    float withdrawal; 
    cout << "Enter your initial balance: ";
    cin >> balance;
    while (true){
        cout << "Enter amount to withdraw (or 0 to exit): ";
        cin >> withdrawal;
        if (withdrawal == 0) {
            cout << "Exiting the ATM. Thank you!" << endl;
            break;
        }
        if (withdrawal > balance){
            cout << "Insufficient funds. Your balance is: " << balance << endl;
        }else{
            balance -= withdrawal; 
            cout << "Withdrawal successful. Your new balance is: " << balance << endl;
        }
    }
    return 0;
}
