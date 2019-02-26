/*
CSC-134
M3T1
Brian Schweikart
02/17/18
while loop
*/
#include <iostream>

using namespace std;
int main(int argc, char *argv[]) 
{
	int num = 0;
	int i = 1;
	int input;
	int sum = 0;
	int avg = 0;
		
	cout << "How many test scores would you like to enter? ";
	cin >> num;
		
	while 
	(cout << "Enter test #" << i  << ": " && cin >> input && i != num)
	{	
		sum += input;
		i++;
	}	
		
	avg = sum / num;
		
	cout << "The average is: " << sum;
}