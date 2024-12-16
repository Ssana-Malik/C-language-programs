//Write a C++ program that takes a number from the user and counts down to 1, printing each number in the process. The program will stop when it reaches 1.
#include<iostream>
using namespace std;
int main(){
	int x,y;
	cout<<"Enter a positive number : ";
	cin >> x;
	cout<<"Countdown begins: \n";
	for(y=x; y>=1; y--){
		cout<<y <<"\n";
	}
	return 0;	
}
