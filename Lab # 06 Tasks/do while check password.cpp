//Write a program that asks the user to enter a password. The user can try up to three times before the program exits. Use a do-while loop to keep asking for the password until the correct password is entered or the user has tried three times
#include<iostream>
using namespace std;
int main(){
	const string password="secret";
	int attempt=0;
	string input;
	do{
		cout<<"\nEnter a password: ";
		cin >> input;
		attempt++;
		if( input==password){
			cout<<"\nPassword Correct! Access granted. "<<endl;
		}else{
			cout<<"\nPassword Incorrect! Try Again. "<<endl;
			if (attempt==3){
				cout<<"\nMaximum attempts reached. Access denied." <<endl;
			}
		}
	}while( input!=password && attempt<3);
	
	return 0;
}
