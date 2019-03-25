#include <iostream>
#include "arithmetic.h"
#include "temperature.h"

void main_menu();

using namespace std;
int main(int argc, char *argv[]) 
{
	main_menu();
	//cout << add(1,1) << endl;
	return 0;	
}

void main_menu()
{
	int menu_choice;
	do 
	{
		cout << " Main Menu" << '\n';
		cout << "1. Addition " << '\n';
		cout << "2. Subtraction " << '\n';
		cout << "3. Multiply " << '\n';
		cout << "4. Divide" << '\n';
		cout << "5. Temp convert" << '\n';
		cout << "6. Exit" << endl;
		cout << "> "; // lets user know to type something
		cin >> menu_choice;
		
		switch (menu_choice) 
		{
			case 1:
				
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:				
				break;
			case 5:
				//tempConvertMenu();
				break;
			case 6:
				break;
			default:
				cout<< "please make a valid selection" << '\n';		 
		}
	} while (menu_choice !=6);
}