/*  Write a simple currency converter program using a structure object to represent a currency. For 
your purposes, a currency object needs to tie together two things: a currency type and an 
amount that will convert the currency to dollars by multiplication. Design a structure that a user 
can use to represent currency objects, and write a program that allows the user to convert dollar 
into rupees.   */
#include <iostream>
using namespace std;
struct Currency {
    string currencyType; 
    double conversionRate;
};
int main(){
    Currency rupee;
    rupee.currencyType = "Pakistani Rupee"; 
    rupee.conversionRate = 277.53; 
    double amountinDollars;
    cout << "Enter amount in dollars: ";
    cin >> amountinDollars; 
    
    double amountinRupees = amountinDollars * rupee.conversionRate;

    cout << amountinDollars << " $ is equal to " << amountinRupees << " " << rupee.currencyType ;
    return 0;
}
