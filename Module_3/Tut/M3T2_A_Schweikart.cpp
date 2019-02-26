/*
CSC-134
M3T2
Brian Schweikart
03/17/18
Pay Chart - while loop
*/
#include <iostream>

using namespace std;
int main(int argc, char *argv[]) 
{
	int hours = 40;
	double pay = 0;
	double net = 0;
	double input;
	int i = 30;
	
	cout << "What is your hourly pay? ";
	cin >> pay;
	
	while (i <= hours)
	{
		net = pay * i;
		cout << "Hours worked " << i << " you earned $" << net << '\n';
		i++;
	}
}