//The program generates a secret number, and the user must guess it. The loop continues until the user guesses correctly.
#include<iostream>
using namespace std;
int main(){
	const int sec_num=27;
	int attempt=0;
	int guess;
	do{
		cout<<"Guess a secret number (1-100): ";
		cin >> guess;
		attempt++;
		if (guess < sec_num){
			cout<<" Too low! Try Again. "<<endl;
		}else if(guess > sec_num){
			cout<<" Too high! Try again. "<<endl;
    	}
    }while(guess != sec_num);
	
	cout<< "\nCongratulations! You found the secret number in " << attempt << " attempts.\n";
	
	return 0;
}
