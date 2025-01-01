// Write a C++ program to find the sum of the digits of a given number using Nested do-while Loop.
#include<iostream>
using namespace std;
int main(){
	int i=0, j, num, original_num, sum, digit;
	cout<<"Enter a number: ";
	cin>> num;
	original_num = num;
	do{
		j=1;
		do{
			digit = num % 10;
			sum += digit;
			j++;
		}while( j<=1 );
		num /= 10;
		i++;
	}while( num!=0 );
	cout<<"Sum of digits of "<<original_num<<" = "<<sum <<endl;
	return 0;
}
