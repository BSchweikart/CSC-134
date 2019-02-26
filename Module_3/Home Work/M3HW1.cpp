/*
CSC-134
M3T1
Brian Schweikart
02/17/18
*/
#include <iostream>
#include <math.h>

using namespace std;
int main(int argc, char *argv[]) 
{
	cout << "Listing 5-1" << '\n';
			cout << fabs(-10.5) << '\n';
			cout << fabs(10.5) << "\n\n";
		
	cout << "Listing 5-2" << '\n';
			double mynumber;
			mynumber = fabs(-23.87);
			cout << mynumber << "\n\n";
	
	cout << "Listing 5-3" << '\n';
			double start;
			double finish;
			
			start = -253.895;
			finish = fabs(start);
			cout << finish << "\n\n";
	
	cout << "Listing 5-4" << '\n';
			double number = 10.0;
			double exponent = 2.0;
			cout << pow(number, exponent) << "\n\n";
				
	cout << "Listing 5-5" << '\n';
	int AddOne(int start)
	{
		int newnumber;
		newnumber = start + 1;
		return newnumber;
	}
			
	int testnumber;
	int result = AddOne(testnumber);
	cout << result << "\n\n";

}