//The program calculates the factorial of a given number.
#include<iostream>
using namespace std;
int main(){
	int i,num,fact=1;
	cout<<"enter a positive number for factorial : ";
	cin >> num;
	for( i=1; i<=num; i++){
		fact*=i;
	}
	cout<<endl <<"The factorial of a number "<<num<<" is : "<<fact;
	return 0;
}
