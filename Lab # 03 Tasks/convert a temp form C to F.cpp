/*Write a program that converts a temperature from Celsius to Fahrenheit. The formula to use is:
?Fahrenheit = (Celsius * 9/5) + 32
Prompt the user to enter a temperature in Celsius and display the equivalent Fahrenheit temperature.*/
#include<iostream>
using namespace std;
int main(){
	double celsius, fahrenheit;
	cout << "Enter the temperature in Celsius: ";
    cin >> celsius;
    fahrenheit = (celsius*9/5)+32;
    cout << "The equivalent temperature in Fahrenheit is: " << fahrenheit;
    return 0;    
}
