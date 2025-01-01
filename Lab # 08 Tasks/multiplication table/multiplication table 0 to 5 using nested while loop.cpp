/* Write a c++ program to print the multiplication table of the numbers from 
0 
to
5
Using Nested while Loop */
#include<iostream>
using namespace std;
int main(){
	int i=0, j;
	while( i<=5 ){
		j=1;
		while( j<=10 ){
			cout<<i <<" * " <<j <<" = " <<i*j <<"\t";
			j++;
		}
		cout<<endl;
		i++;
	}
	return 0;
}
