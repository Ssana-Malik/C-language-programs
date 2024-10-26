//A program that continuously displays a menu to the user and performs actions based on user input. The program continues until the user chooses to exit.
#include<iostream>
using namespace std;
int main(){
	int num;
	do{
		cout<<"\n-------------Menu-------------"<<endl;
		cout<<"1. Print Hello "<<endl;
		cout<<"2. Print World "<<endl;
		cout<<"3. Exit "<<endl;
		cout<<"\nEnter any number (1-3): ";
		cin>> num;
		if(num == 1){
			cout<<"Hello "<<endl;
		}else if(num == 2){
			cout<<"World "<<endl;
		}else{
			cout<<"Exit "<<endl;
		} 
	}while(num != 3);
	
	return 0;
}
