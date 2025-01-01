/*Write a C++ program that will print the following pattern using Nested while Loop.
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
	int i=1, j;
	while( i<=7 ){
		int j=1;
		while( j<=i ){
			cout<<"*";
			j++;	
		}
		cout<<endl;
		i++;
	}
	return 0;
}
