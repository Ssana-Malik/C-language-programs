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
