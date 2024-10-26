/*Write a program to calculate the area and perimeter of a rectangle. Take the length and width as inputs (use double or float data types). Formulas are as follows:
?area = length * width
?perimeter = 2 * (length + width)
Display the calculated area and perimeter on the screen.*/
#include<iostream>
using namespace std;
int main(){
	double area,perimeter,length,width;
	cout << "enter the length of the rectangle: ";
	cin >> length;
	cout << "enter the width of the rectangle: ";
	cin >> width;
	area = length*width;
	perimeter = 2*(length+width);
	cout << "The area of the rectangle is: " << area << endl;
	cout << "The perimeter of the rectangle is: " << perimeter;
    return 0;	
}
