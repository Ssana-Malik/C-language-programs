// In a software system, there is a need to keep track of user activities for auditing and debugging purposes. The following C++ program is designed to log user activities into a file named "UserLog.txt." It records user interactions and then reads and displays the logged activities. The log file captures user login events, dashboard access, and other user interactions. If any errors occur during file operations, appropriate error messages are displayed.
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
