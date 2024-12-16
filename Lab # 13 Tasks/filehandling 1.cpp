#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream myfile("filename.txt");           
	if( !myfile ) {                                            
		cout<<"Error: file could not be created \n";
		return 1;
	}
	myfile<<"Hello, World! \n";                              
	myfile<<"File handling in C++ \n";  
	myfile.close();
	cout<<"Content written to filename.txt successfully. "<<endl;
	return 0;                                                     
}
