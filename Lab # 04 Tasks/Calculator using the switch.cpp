//Write a C++ program to create a Calculator using the switch Statement using switch case.
#include<iostream>
using namespace std;
int main(){
	char operation;
	double num1, num2, result;
	cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    switch (operation){
    	case '+':
    		result = num1 + num2;
            cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
            break;
        case '-':
        	result = num1 - num2;
            cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
            break;
        case '*':
		    result = num1 * num2;
            cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
            break;  
	    case'/':
		    if (num2 != 0){
		    	result = num1 / num2;
                cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
			}
		    else{
		    	cout << "Error: Division by zero!" << endl;
		    }
		   break;
		default:
			cout << "Invalid operation!" << endl;			
	}
	return 0;
}
