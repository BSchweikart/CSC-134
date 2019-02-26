#include <iostream>

using namespace std;
int main(int argc, char *argv[]) 
{
	cout << "Listing 7-3" << '\n';
			int NumberOfPotholes;
			int *ptr = &NumberOfPotholes;
			int SaveForLater;
			*ptr = 6087;
			SaveForLater = *ptr;
			cout << SaveForLater << '\n';
			*ptr = 7000;
			cout << *ptr << '\n';
			cout << SaveForLater << '\n';	
}