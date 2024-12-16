// Write a C++ program to find the sum of the digits of a given number using Nested while Loop.
#include<iostream>
using namespace std;
int main(){
	int i=0, j, num, original_num, sum, digit;
	cout<<"Enter a number: ";
	cin>> num;
	original_num = num;
	while( num!=0 ){
		j=1;
		while( j<=1 ){
			digit = num % 10;
			sum += digit;
			j++;
		}
		num /= 10;
		i++;
	}
	cout<<"Sum of digits of "<<original_num<<" = "<<sum <<endl;
	return 0;
}
