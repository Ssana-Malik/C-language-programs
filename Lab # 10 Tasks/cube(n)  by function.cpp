//  Write a code that take numbers from user and displays its cube. The Code should reads integers and prints their cubes until the user inputs the sentinel value 0. Each integer read should be passed to the cube() function by the call cube(n). The value returned by the function should replaces the expression cube(n) and then should be passed to the output object cout.
#include<iostream>
using namespace std;
int cube(int n){
	return n*n*n;
}
int main(){
	int num;
	cout<<"enter numbers ( 0 to stop ) : " <<endl;
	while(true){
		cin>>num;	
		if (num==0){
			break;
		}
	    cout << "Cube of " << num << " is: " << cube(num) << endl;
	}
    return 0;
}
