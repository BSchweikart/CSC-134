#include <iostream>

using namespace std;
int main(int argc, char *argv[]) 
{
	cout << "Listing 7-4" << '\n';
			string GoodMovie;
			string *ptrToString;
			GoodMovie = "Best in show";
			ptrToString = &GoodMovie; 
			cout << *ptrToString << '\n';		
}