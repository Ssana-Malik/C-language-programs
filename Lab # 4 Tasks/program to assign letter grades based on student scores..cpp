/*Create a program to assign letter grades based on student scores.

1.Prompt the user to input their exam score (out of 100).
2.Use nested if to assign a letter grade:
oIf the score is 90 or above, print "Grade: A"
oIf the score is between 80 and 89:
?If the score is greater than or equal to 85, print "Grade: B+"
?Otherwise, print "Grade: B"
oIf the score is between 70 and 79:
?If the score is greater than or equal to 75, print "Grade: C+"
?Otherwise, print "Grade: C"
oIf the score is between 60 and 69, print "Grade: D"
oIf the score is below 60, print "Grade: F"*/
#include<iostream>
using namespace std;
int main(){
	int score;
	cout << "Please enter your exam score (out of 100): ";
    cin >> score;
    if (score >= 90){
        cout << "Grade: A" << endl;
    } 
    else if (score >= 80 && score < 90){
        if (score >= 85){
            cout << "Grade: B+" << endl;
        } 
        else{
            cout << "Grade: B" << endl;
        }
    } 
    else if (score >= 70 && score < 80){
        if (score >= 75){
            cout << "Grade: C+" << endl;
        } 
        else{
            cout << "Grade: C" << endl;
        }
    } 
    else if (score >= 60 && score < 70){
        cout << "Grade: D" << endl;
    } 
    else{
        cout << "Grade: F" << endl;
    }
    return 0;
}

