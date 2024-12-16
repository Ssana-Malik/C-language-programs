//Write a program to check whether a number entered by the user is even or odd. Use an if-else statement to display either "The number is even" or "The number is odd."
#include<iostream>
using namespace std;
int main(){
	int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number % 2 == 0){
    	cout << "The number is even.";
	}
	else{
		cout << "The number is odd.";
	}
	return 0; 
}
