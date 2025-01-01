// Write a C++ program to create a new text file named "output.txt" and write the following content into it:
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream outfile("output.txt");
	if( !outfile ) {
		cout<<"Error: file could not be created \n";
		return 1;
	} 
	outfile<<"Writing to a file in C++. \n";
	outfile<<"File handling is essential for data manipulation. ";
	outfile.close();
	cout<<"Content written to output.txt successfully. "<<endl;
	return 0;
}
