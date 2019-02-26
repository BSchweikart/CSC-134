/*
CSC-134
M3T1
Brian Schweikart
02/17/18
for loop
*/
#include <iostream>

using namespace std;
int main(int argc, char *argv[]) 
{
	int sum = 0;
	int avg = 0;
	int input;
	int num = 0;
	
	cout << "How many test scores would you like to enter? ";
	cin >> num;
	
	for (int i =0; i != num; ++i)
	{
		cout << "Enter test #" << i + 1 << ": ";
		cin >> input;
		
		sum += input;
	}	
	
	avg = sum / num;
	
	cout << "The average is: " << avg;
}