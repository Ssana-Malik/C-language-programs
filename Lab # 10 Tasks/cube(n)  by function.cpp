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
