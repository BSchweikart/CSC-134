/*
CSC-134
M3HW2
Brian Schweikart
03/17/18
Number 5
*/
#include <iostream>

using namespace std;

double getNumberGrade(double g);
char convertNumberToLetterGrade(double g);

int main(int argc, char *argv[]) 
{
	double grade;
	char g;
	cout << "Enter your number grade: ";
	grade = getNumberGrade(grade);
	g = convertNumberToLetterGrade(grade);
	cout << "You earned an: " << g << '\n';
}

double getNumberGrade(double g)
{
	cin >> g;
	return g;	
}
char convertNumberToLetterGrade(double g)
{
	char letter;	
	if(g >= 90)
		letter = 'A';
	
	else if(g >= 80)
		letter = 'B';
	
	else if(g >= 70)
		letter = 'C';
	
	else if(g >= 60)
		letter = 'D';
	
	else
		letter = 'F';
	return letter;
}