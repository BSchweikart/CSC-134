#include <iostream>

using namespace std;
int main(int argc, char *argv[]) 
{
	cout << "Listing 7-6" << '\n';
		int ExpensiveComputer;
		int CheapComputer;
		int *ptrToComp;
				
		ptrToComp = &ExpensiveComputer;
		*ptrToComp = 2000;
		cout << *ptrToComp << '\n';
		
		ptrToComp = &CheapComputer;
		*ptrToComp = 500;
		cout << *ptrToComp << '\n';
		
		ptrToComp = &ExpensiveComputer;
		cout << *ptrToComp << '\n';
}