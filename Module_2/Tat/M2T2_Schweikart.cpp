/*
CSC-134
M2T2
Brian Schweikart
01/31/18
*/

#include <iostream>

using namespace std;
int main(int argc, char *argv[]) 
{
	cout << "IfElse, IfElse2, IfElse3" << '\n';
	double i;
	
	cout << "Type any number: ";
	cin >> i;
	
	if (i >100)
	{
		cout << "It's greater than 1." << '\n';
	}
	else if (i == 10)
	{
		cout << "It's equal to 10." << '\n';
	}
	else
	{
		cout << "It's neither greater than 100 nor greater than 10." << "\n\n";
	}
	
	cout << "ForLoop" << '\n';
	double x = 0.0;
	
	for (i = 1; i <= 100; i++)
	{
		x += i;
	}
	cout << x << "\n\n";
	
	cout << "ForCountdown" << '\n';
	for (i = 10; i >= 5; i--)
	{
		cout << i << "\n\n";
	}
	
	cout << "ForLoop2" << '\n';
	
	for (i = 0.0; i <= 100; i += 0.1)
	{
		x += i;
	}
	cout << x << "\n\n";
	
	cout << "WhileLoop" << '\n';
	while (i <= 10)
	{
		cout << i << '\n';
		i++;
	}
	
	cout << "All Finsihed!" << "\n\n";
	
	cout << "DoWhileLoop" << '\n';
	do 
	{
		cout << i << '\n';
		i++;
	} 
	while (i <= 10);
	cout << "All Finished!" << endl;
	
	return 0;
	
}