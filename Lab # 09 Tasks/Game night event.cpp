// Organizing a Game Night Event       
#include<iostream>
using namespace std;
int main(){
	const int MAX_STUDENTS = 15;
	string studentName[MAX_STUDENTS];
    int entryFee = 700, snackCost = 250;
    int individualCost = entryFee + snackCost;
    int totalCost = 0;
    int numStudents;
    cout << "How many students will attend the game night? (Max 15): ";
    cin >> numStudents;
    if (numStudents > MAX_STUDENTS) {
        cout << "Error: Not more students allowed." << endl;
        return 1;
    }
    cout << "\nUser names for the event:" << endl;
    for (int i = 0; i < numStudents; i++) {
        cout << "\nEnter name for student " << i + 1 << ": ";
        cin >> studentName[i]; 
        cout << "Student " << i + 1 << ": " << studentName[i] << ", Cost: " << individualCost <<" Rupees. "<< endl;
        totalCost += individualCost;
    }
    cout << "\nTotal cost for all students: " << totalCost <<" Rupees."<< endl;
    return 0;
}

