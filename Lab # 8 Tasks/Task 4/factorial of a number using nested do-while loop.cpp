//Write a C++ program to find the factorial of a given number using Nested do-while Loop.
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
	do{
		fact=1;
		j=1;
		do{
			fact=fact*j;
			j++;
		}while( j<=i );
		i++;
	}while( i<=n );
	cout<<"Factorial of "<<n<<" is : "<<fact;
    return 0;
}
