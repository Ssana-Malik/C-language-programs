/* Write a c++ program to print the multiplication table of the numbers from 
0 
to
5
Using Nested do-while Loop */
#include<iostream>
using namespace std;
int main(){
	int i=0, j;
	do{
		j=1;
		do{
			cout<<i <<" * " <<j <<" = " <<i*j <<"\t";
			j++;
		}while( j<= 10 );
		i++;
		cout<<endl;
	}while( i<=5 );
	return 0;
}
