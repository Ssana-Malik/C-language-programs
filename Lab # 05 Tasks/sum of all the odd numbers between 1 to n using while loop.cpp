//Write a C++ program to calculate the sum of all the odd numbers between 1 to n, where n is taken as input from the user using a while loop.
#include<iostream>
using namespace std;
int main(){
	int n, i=1, sum=0;
	cout << "Enter a number (n): ";
    cin >> n;
    while(i <= n){
    	sum += i;
    	i += 2;
	}
	cout << "The sum of all odd numbers between 1 and " << n << " is: " << sum << endl;
	return 0;
}
