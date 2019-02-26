/*
CSC-134
M2T1
Brian Schweikart
01/22/18
Listings 3-1 through 3-9
*/

#include <iostream>

using namespace std;
int main(int argc, char *argv[]) 
{
	cout << "Listing 3-1" << '\n';
		int mynumber;
		mynumber = 10;
		cout << mynumber << "\n\n";
	
	cout << "Listing 3-2" << '\n';
		mynumber = 20;
		cout << mynumber << "\n\n";
	
	cout << "Listing 3-3" << '\n';
		int start = 50;
		int finish;
		finish = start;
		cout << finish << "\n\n";
	
	cout << "Listing 3-4" << '\n';
		int final, time;
		final = 28;
		time = 18;
		cout << final - time << "\n\n";
	
	cout << "Listing 3-5" << '\n';
	int first, second;
	cout << "Dividing 28 by 14." << endl;
		first = 28;
		second = 14;
		cout << "Quotient " << first / second << endl;
		cout << "Remainder " << first % second << endl;
	cout << "Dividing 32 by 6." << endl;
		first = 32;
		second = 6;
		cout << "Quotient " << first / second << endl;
		cout << "Remainder " << first % second << "\n\n";
	
	cout << "Listing 5-1" << '\n';
		string mystring;
		mystring = "abcdef";
		cout << mystring[2] << "\n\n";
	
	cout << "Listing 5-2" << '\n'; 
		string mystring;
		mystring = "Hello there";
		cout << mystring << "\n\n";
	
	cout << "Listing 3-8" << '\n';
		int first = 10;
		int second = 20;
		string result;
		result = first == second ? "equal" : "not equal";
		count << result << "\n\n";
	
	cout << "Listing 3-9" << '\n';
		string name;
		cout << "Type your name: ";
		getline(cin,name);
		cout << "Your name is " << name << endl;

	return 0;
	
	
}