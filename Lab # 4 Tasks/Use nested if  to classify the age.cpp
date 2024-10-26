/*Write a program that classifies a person into an age group. Prompt the user to enter their age. Use nested if statements to classify the age:
oIf the age is less than 0, print "Invalid age."
oIf the age is between 0 and 12, print "Child."
oIf the age is between 13 and 19:
?If the age is exactly 13, print "Just a Teen."
?Otherwise, print "Teenager."
oIf the age is between 20 and 60, print "Adult."
oIf the age is above 60, print "Senior Citizen."*/
#include<iostream>
using namespace std;
int main(){
	int age;
	cout<<"Please enter your age: ";
	cin>> age;
	if(age < 0){
		cout<<"Invalid age."<<endl;
	}
	else if(age >= 0 && age <= 12){
		cout<<"Child."<<endl;
	}
	else if(age >= 13 && age <= 19){
		if(age == 13){
			cout <<"Just a Teen."<<endl;
		}
		else{
			cout <<"Teenager."<<endl;
		}
	}
	else if(age >= 20 && age <= 60) {
		cout <<"Adult."<<endl;
	}
	else{
		cout <<"Senior Citizen."<<endl;
	}
	return 0;
}
