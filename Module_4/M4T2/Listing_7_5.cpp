#include <iostream>

using namespace std;
int main(int argc, char *argv[]) 
{
	cout << "Listing 7-5" << '\n';
	string HorribleMovie;
	string *ptrToString;
	
	HorribleMovie = "L.A. Confidential";
	ptrToString = &HorribleMovie;
	
	for(unsigned i = 0; i < HorribleMovie.length(); i++)
	{
		cout << (*ptrToString) [i] << " ";
	}
	cout << '\n';	
}