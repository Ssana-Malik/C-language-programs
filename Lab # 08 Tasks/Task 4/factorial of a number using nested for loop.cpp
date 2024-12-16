//Write a C++ program to find the factorial of a given number using Nested For Loop.
#include<iostream>
using namespace std;
int main(){
	int i, j, n, fact;
	cout<<"Enter any number for factorial: ";
	cin>>n; 
	if( n<0 ){
		cout<<"Factorial of negative numbers is not possible. ";
		return 0;
	}
	for ( i=1; i<=n; i++){
		fact=1;
		for( j=1; j<=i; j++){
		fact=fact*j;  
	    }
    }
	cout<<"Factorial of "<<n<<" is : "<<fact;
    return 0;
}
