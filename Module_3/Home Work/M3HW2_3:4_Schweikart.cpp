/*
CSC-134
M3HW2
Brian Schweikart
03/17/18
Numbers 3&4
*/
#include <iostream>

using namespace std;
int calcArea(double l, double w);
void printArea(double l, double w);
int main(int argc, char *argv[]) 
{
	double length, width, area = 0;
	cout << "Please enter the length of the rectangle: ";
	cin >> length;
	cout << "Please enter the width of the rectangle: ";
	cin >> width;
	area = calcArea(length, width);
	cout << "The area of the rectangle is: " << area << "\n\n" ;
	printArea(length, width);
}
void printArea(double l, double w)
{
	cout << "The area of the rectangle is: " << l * w << " (done with a void)" << '\n';
}
int calcArea(double l, double w)
{
	return l * w;
}
