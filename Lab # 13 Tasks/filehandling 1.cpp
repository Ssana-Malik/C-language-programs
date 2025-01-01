// C++ program that creates a file named "filename.txt" and writes the text following content into it.
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream myfile;
	myfile.open("filename.txt", ios::out);           
	if( !myfile ) {                                            
		cout<<"Error: file could not be created \n";
		return 1;
	}else{
	myfile<<"Hello, World! \n";                              
	myfile<<"File handling in C++ \n";  
	myfile.close();
	cout<<"Content written to filename.txt successfully. "<<endl;
    }
	return 0;                                                     
}
