// Organizing a Qawali Night Event 
#include<iostream>
using namespace std;
int main() {
    const int MAX_USERS = 10;
    string userName[MAX_USERS];
    int ticketPrice = 1500, popcornPrice = 250;
    int individualCost = ticketPrice + popcornPrice;
    int totalCost = 0;
    int numUsers;
    cout << "How many users attending the event (Max 10): ";
    cin >> numUsers;
    if (numUsers > MAX_USERS) {
        cout << "Error: Not more users allowed." << endl;
        return 1;
    }else{
        cout << "\nUser names for the event:" << endl;
            for (int i = 0; i < numUsers; i++) {
                cout << "\nEnter name for user " << i + 1 << ": ";
                cin >> userName[i]; 
                cout <<"User " << i+1 << ": " << userName[i] << ", cost : " << individualCost <<" Rupees. "<< endl;
                totalCost += individualCost;
            }
    }
    cout << "\nTotal cost for all users: " << totalCost <<" Rupees. "<< endl;
    return 0;
}


