//Write a C++ program to find the factorial of a given number using Nested while Loop.
#include<iostream>
using namespace std;
int main(){
	int i=1, j, n, fact;
	cout<<"Enter any number for factorial: ";
	cin>>n; 
	if( n<0 ){
		cout<<"Factorial of negative numbers is not possible. ";
		return 0;
	}
	while( i<=n ){
		fact=1;
		j=1;
		while( j<=i ){
			fact=fact*j;
			j++;
		}
		i++;
	}
	cout<<"Factorial of "<<n<<" is : "<<fact;
	return 0;
}
