#include<iostream>
using namespace std;
void swapbyValue( int n1, int n2){
	int temp;
	temp=n1;
	n1=n2;
	n2=temp;
	cout<<"swapped values (by value): "<<n1 <<" " <<n2 <<endl;
}
void swapbyReference( int &n1, int &n2){
	int temp;
	temp=n1;
	n1=n2;
	n2=temp;
	cout<<"swapped values (by reference): "<<n1 <<" " <<n2 <<endl;
}
int main(){
	int num1, num2;
	cout<<"enter first number: ";
	cin>>num1;
	cout<<"enter second number: ";
	cin>>num2;
	cout<<"Original numbers are: "<<num1 <<" " <<num2 <<endl;
	swapbyValue(num1, num2);
	cout<<"Numbers after swapping by value : "<<num1 <<" " <<num2 <<endl;
	swapbyReference(num1, num2);
	cout<<"Numbers after swapping by reference : "<<num1 <<" " <<num2 <<endl;
	return 0;
}
