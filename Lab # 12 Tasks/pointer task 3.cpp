/*  Pointers with arrays:
   The square function takes an integer as an argument and returns the square of that number.
   A function pointer squarePtr is declared, which can point to a function taking an integer and returning an integer.
  The address of the square function is assigned to the function pointer.
  The program prompts the user to input a number.
  The function pointer is used to call the square function with the user-inputted number, and the result is printed.   */
#include<iostream>
using namespace std;

int square(int num) {
    return num * num;
}

int main() {
    // Declare a function pointer
    int (*squarePtr);

    // Assign the address of the square function to the function pointer
    squarePtr = square;

    // Prompt the user to input a number
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Use the function pointer to call the square function and print the result
    int result = (*squarePtr)(num);
    cout << "The square of " << num << " is " << result << endl;

    return 0;
}



