/*Using Switch statement, write a program that displays the following menu for the bank operations available to take services from the customer: 

• D= Deposit
• W= Withdraw
• T= Transfer

The program inputs the type of service and amount. It finally displays the amount to be transfer/deposit/transfer after applying charges, total remaining balance of customer according to the following criteria:
• Deposit = 0.5% charges of deposited amount
• Withdraw = 1.5% charges of withdraw amount
• Transfer = 2.5% charges of transfer amount*/
#include<iostream>
using namespace std;
int main(){
	char choice;
    double amount, charges, newbalance, balance;
    cout<<"Enter your initial balance: ";
    cin>> balance;
    cout << "Bank Operations Menu:" << endl;
    cout << "D = Deposit" << endl;
    cout << "W = Withdraw" << endl;
    cout << "T = Transfer" << endl;
    cout << "Enter your choice (D/W/T): ";
    cin >> choice;
    switch (choice){
        case 'D':
        case 'd':
        	cout<<"Enter the amount to deposit: $";
        	cin >> amount;
            charges = amount * 0.005;
            newbalance = balance + amount + charges;
            break;
        case 'W':
        case 'w':
        	cout<<"Enter the amount to withdraw: $";
        	cin >> amount;
            charges = amount * 0.015;
			newbalance = balance - amount - charges;
            break;
        case 'T':
        case 't':
        	cout<<"Enter the amount to transfer: $";
            charges = amount * 0.025;
			newbalance = balance - amount - charges;
            break;
        default:
            cout << "Invalid choice !!" << endl;
    }
    cout << "Charges: $" << charges << endl;
    cout << "New Balance: $" << newbalance << endl;
    
    return 0;
}    

