#include<iostream>
using namespace std;
int largestintbyvalue( int x, int y, int z){
	if( x>=y && x>=z){
		return x;
	}
	else if( y>=x && y>=z){
		return y;
	}
	else{
		return z;
	}
}
int largestintbyreference( int &x, int &y, int &z){
	if( x>=y && x>=z){
		return x;
	}
	else if( y>=x && y>=z){
		return y;
	}
	else{
		return z;
	}
}
int main(){
	int n1,n2,n3;
	cout<<"enter first number: ";
	cin>>n1;
	cout<<"enter second number: ";
	cin>>n2;
	cout<<"enter third number: ";
	cin>>n3;
    cout << "The largest integer by pass by value is : " << largestintbyvalue( n1, n2, n3) << endl;
 
    return 0;
}
