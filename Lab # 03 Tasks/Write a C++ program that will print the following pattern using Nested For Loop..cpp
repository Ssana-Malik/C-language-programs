/*Write a C++ program that will print the following pattern using Nested For Loop.
Sample Output:
*
**
***
****
*****
******
*******   */
#include<iostream>
using namespace std;
int main(){
	int i,j;
	for( i=1; i<=7; i++){
		for( j=1; j<=i; j++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}


