//Write a C++ program that prints the multiplication table of a number entered by the user. The table should display the product from 1 to 10.(For loop)
#include<iostream>
using namespace std;
int main(){
	int x,y;
    cout<<"Which number of table do you want: ";
    cin >> x;
    for( y=1; y<=10; y++ ){
    	cout<< x <<" * "<<y <<" = "<<(x*y) <<endl;
    }
    return 0;
}
