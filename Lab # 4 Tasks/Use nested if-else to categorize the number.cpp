/*Create a program that categorizes a number based on its rang. Prompt the user to enter a number. Use nested if-else statements to categorize the number:
oIf the number is positive:
?If the number is greater than 100, print "The number is large."
?If the number is less than or equal to 100, print "The number is small."
oIf the number is negative:
?If the number is less than -100, print "The number is very small."
?If the number is greater than or equal to -100, print "The number is small and negative."
oIf the number is zero, print "The number is zero."*/
#include<iostream>
using namespace std;
int main(){
	int number;
	cout<<"Please enter a number: ";
	cin>> number;
	if(number>0){
		if(number>100){
			cout<<"The number is large."<<endl;
		}
		else{
			cout<<"The number is small."<<endl;
		}
	}
	else if(number<0){
		if(number<-100){
			cout<<"The number is very small."<<endl;
		}
		else{
			cout<<"The number is small and negative."<<endl;
		}
	}
	else{
		cout<<"The number is zero."<<endl;
	}
	return 0;
}

