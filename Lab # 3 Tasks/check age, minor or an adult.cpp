//Write a program that prompts the user to enter their age. Use an if-else statement to check if the user is a minor (age less than 18) or an adult (age 18 or above). Display an appropriate message: "You are a minor" or "You are an adult."//
#include<iostream>
using namespace std;
int main(){
	int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age < 18){
    	cout << "You are a minor.";
	}
	else{
		cout << "You are an adult.";
	}
	return 0;
}
