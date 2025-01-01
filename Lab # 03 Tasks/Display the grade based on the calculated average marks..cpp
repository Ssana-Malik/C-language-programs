/*Write a program that takes the marks of a student in three subjects as input. Use an if-else-if ladder to calculate the grade as follows:
?Marks >= 90: Grade A
?Marks >= 80: Grade B
?Marks >= 70: Grade C
?Marks >= 60: Grade D
?Marks < 60: Grade F
Display the grade based on the calculated average marks.*/
#include<iostream>
using namespace std;
int main(){
	float marks1, marks2, marks3, average;
	cout << "Enter marks for subject 1: ";
    cin >> marks1;
    cout << "Enter marks for subject 2: ";
    cin >> marks2;
    cout << "Enter marks for subject 3: ";
    cin >> marks3;
    average = (marks1 + marks2 + marks3) / 3;
    if (average >= 90){
        cout << "Grade A.";
    } 
	else if (average >= 80){
        cout << "Grade B.";
    }
	else if (average >= 70){
        cout << "Grade C.";
    }
	else if (average >= 60){
        cout << "Grade D.";
    } 
	else{
        cout << "Grade F.";
    }
    return 0;
}
