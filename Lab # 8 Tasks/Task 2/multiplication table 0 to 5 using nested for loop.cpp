/* Write a c++ program to print the multiplication table of the numbers from 
0 
to
5
Using Nested For Loop */
#include<iostream>
using namespace std;
int main(){
	int i, j;
	for( i=0; i<=5; i++){
		for( j=1; j<=10; j++){
			cout<<i <<" * " <<j <<" = " <<i*j <<"\t";
		} 
		cout<<endl;
	}
	return 0;
}
