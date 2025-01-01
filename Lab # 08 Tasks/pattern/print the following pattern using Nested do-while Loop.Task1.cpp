/* Write a C++ program that will print the following pattern using Nested do-while Loop.
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
	do{
		j=1;
		do{
			cout<<"*";
			j++;
		}while( j<= i);
		i++;
		cout<<endl;
	}while(i<=7);
	return 0;
}
