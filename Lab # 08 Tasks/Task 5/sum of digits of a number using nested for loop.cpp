// Write a C++ program to find the sum of the digits of a given number using Nested For Loop.
#include<iostream>
using namespace std;
int main(){
	int i, j, num, original_num, sum, digit;
	cout<<"Enter a number: ";
	cin>> num;
	original_num = num;
	for( i=0; num!=0; i++ ){
		digit = num % 10;
		for( j=1; j<=1; j++ ){
			sum += digit;
		}
		num /= 10;
	}
	cout<<"Sum of digits of "<<original_num<<" = "<<sum <<endl;
	return 0;
}

