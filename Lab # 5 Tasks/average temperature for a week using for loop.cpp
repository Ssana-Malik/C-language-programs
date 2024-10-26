//You are designing a program for a weather station to calculate the average temperature for a week (7 days). The user will input the temperature for each day, and the program will calculate and display the average temperature at the end of the week.
#include<iostream>
using namespace std;
int main(){
    float temperature;
    float sum = 0; 
    int days = 7; 
    float average;
    for (int i = 1; i <= days; i++){
        cout << "Enter the temperature for day " << i << ": ";
        cin >> temperature;
        sum += temperature; 
    }
    average = sum / days;
    cout << "The average temperature for the week is: " << average << " degrees." << endl;
    return 0;
}

