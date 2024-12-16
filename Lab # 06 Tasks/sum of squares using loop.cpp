//A program that calculates the sum of squares of the first N natural numbers.
#include<iostream>
using namespace std;
int main(){
	int x,y,square,sum=0;
	cout<<"Enter any Natural number: ";
	cin >> y;
	for(x=1; x<=y; x++){
		square=x*x;
		sum=sum+square;
	}
	cout<<"Sum of squares is: "<<sum << endl;
	return 0;
}
