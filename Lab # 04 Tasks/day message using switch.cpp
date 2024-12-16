/*Write a program that displays a message based on the day of the week.
1.Prompt the user to enter a number (1 for Monday, 2 for Tuesday, ..., 7 for Sunday).
2.Use a switch statement to display a message:
oFor Monday "Start of the workweek."
oFor Tuesday "It's Tuesday, stay productive."
oFor Wednesday "Midweek motivation!"
oFor Thursday print "Almost the weekend."
ofor Friday “TGIF!"
ofor Saturday "Relax, it's Saturday."
oFor Sunday print "Enjoy your Sunday!"
oWhen wrong selection "Invalid day selection."*/
#include<iostream>
using namespace std;
int main(){
	int day_number;
	cout << "Please enter a number (1 for Monday, 2 for Tuesday, ..., 7 for Sunday): ";
    cin >> day_number;
    switch (day_number){
        case 1:
            cout << "Start of the workweek." << endl;
            break;
        case 2:
            cout << "It's Tuesday, stay productive." << endl;
            break;
        case 3:
            cout << "Midweek motivation!" << endl;
            break;
        case 4:
            cout << "Almost the weekend." << endl;
            break;
        case 5:
            cout << "TGIF!" << endl;
            break;
        case 6:
            cout << "Relax, it's Saturday." << endl;
            break;
        case 7:
            cout << "Enjoy your Sunday!" << endl;
            
            break;
        default:
            cout << "Invalid day selection." << endl;
    }
    return 0;
}
