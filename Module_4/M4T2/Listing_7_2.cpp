#include <iostream>

using namespace std;
int main(int argc, char *argv[]) 
{
	cout << "Listing 7-2" << '\n';
		int NumberOfPotholes;
		int *ptr;
		ptr = &NumberOfPotholes;
		*ptr = 6087;
		cout << NumberOfPotholes << "\n\n";	
}