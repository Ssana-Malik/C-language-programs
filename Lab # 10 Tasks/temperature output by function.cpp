//  Develop a program in C++ that has function printTempOpinion() which prints "Cold" on if the temperature is below 10, "OK" if the temperature is in the range 20 -> 30,"Hot" if the temperature is above 30.
#include<iostream>
using namespace std;
void printTempOpinion(int temp){
	if(temp<10){
		cout<< "Cold" <<endl;
	}
	else if(temp>=20 && temp<=30){
		cout<< "OK" <<endl;
	}
	else if(temp>30){
		cout<< "Hot" <<endl;
	}
	else{
		cout<< "Unknown" <<endl;
	}
}
int main() {
    int temperature;
    cout << "Enter temperature: ";
    cin >> temperature;
    printTempOpinion(temperature);
    return 0;
}


