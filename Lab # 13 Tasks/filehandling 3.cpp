#include <iostream>
#include <fstream>
using namespace std;
int main(){
	string name[3];
	ofstream File("UserLog.txt", ios::app);
	if(!File){
		cout<<"Error: Could not open a file for handling."<<endl;
		return 1;
	}
	for(int i=0;i<3;i++){
		cout<<"Enter name: ";
	    cin>>name[i];
	}
	File<<"User Activities Log:"<<endl;
	File<<"User "<<"'"<<name[0]<<"' logged in."<<endl;
	File<<"User "<<"'"<<name[1]<<"' accessed the dashboard."<<endl;
	File<<"User "<<"'"<<name[2]<<"' performed the file operation.";
	File.close();
	
	ifstream inFile("UserLog.txt");
	if(!File){
		cout<<"Error: Could not open a file for handling."<<endl;
		return 1;
	}
	while(inFile >>name[3]){
	}
	inFile.close();
    return 0;
}
