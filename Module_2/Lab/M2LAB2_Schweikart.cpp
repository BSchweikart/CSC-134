/*
CSC-134
M2LAB
Brian Schweikart
01/24/18

*/
#include <iostream>

using namespace std;
int main(int argc, char *argv[]) 
{
	// Var
	double avg;
	//string grade;

	cout << "Welcome to teachers's Helper" << "\n\n";
	cout << "Enter your grade avg for letter grade: ";
	cin >> avg;
	
	
	
	
	
	if(avg >= 90)
		cout << "A" << endl;
	else if(avg >= 80)
		cout << "B" << endl;
	else if(avg >= 70)
		cout << "C" << endl;
	else if(avg >= 60)
		cout << "D" << endl;
	else
		cout << "F" << '\n';
	
	return 0;
}