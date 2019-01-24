/*
CSC-134
M2LAB
Brian Schweikart
01/22/18

*/
#include <iostream>

using namespace std;
int main(int argc, char *argv[]) 
{
	//Vars
	string movieName;
	char firstLetter;
	double rating;
	int year;

	cout << "Enter a move title: ";
	getline(cin, movieName); //Have to use getline to read white space and set string
	firstLetter = movieName[0]; // get first letter in string
	cout << "When was it released? ";
	cin >> year; //set year
	cout << "What is its IMDB rating? ";
	cin >> rating; // set rating
	cout << "I would file this movie under: " << firstLetter << endl; //display first letter
	return 0;	
}