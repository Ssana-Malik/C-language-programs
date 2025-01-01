//Write a C++ program that keeps asking the user to enter numbers and calculates their sum. The loop stops when the user enters a negative number, and the program then displays the total sum of all non-negative numbers entered.(While loop)
#include<iostream>
using namespace std;
int main(){
	int number;
	int sum=0;
	cout << "Enter numbers to calculate their sum (enter a negative number to stop):" << endl;
	while (number>0){
		cin>> number;
		if (number<0){
			break;
		}
	sum += number;	
	}
	cout << "The total sum of non-negative numbers entered is: " << sum << endl;
	return 0;
}
