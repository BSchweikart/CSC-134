/*
CSC-134
M3T2
Brian Schweikart
03/17/18
Pay Chart
*/
#include <iostream>

using namespace std;
int main(int argc, char *argv[]) 
{
	int hours = 40;
	double pay = 0;
	double net = 0;
	double input;
	
	cout << "What is your hourly pay? ";
	cin >> pay;
	
	for (int i = 30; i <= hours; i ++)
	{
		net = pay * i;
		cout << "Hours worked " << i << " you earned $" << net << '\n';
	}
}