/*
CSC-134
M2LAB
Brian Schweikart
01/25/18
*/
#include <iostream>

using namespace std;
int main(int argc, char *argv[]) 
{
	//Start Problem 1
	cout << "#1" << endl;
		float length = 0;
		float width = 0;
	
		cout << "Lets find the area of a rectangle" << '\n';
		cout << "What is the length of the rectangle: ";
		cin >> length;
		cout << "What is the width of the rectangle: ";
		cin >> width;
		float area = length * width;
		cout << "The area is: " << area << "\n\n";
	
	//Start Problem 2
	cout << "#2" << endl;
		double fahrenheit = 0;
		double celsius = 0;
	
		cout << "Lets convert Celsius to Fahrenheit" << '\n';
		cout << "What is the tempature in Celsius: ";
		cin >> celsius;
		fahrenheit = (celsius * 1.8) + 32;
		cout << celsius <<" degress in Celsius is " << fahrenheit << " degrees in Fahrenhiet" << "\n\n";
	
	//Start Problem 3 
	cout << "#3" << endl;
		string movieNameA;
		string movieNameB;
		//char firstLetter; this was left in so that if you wanted to use it to state the were the move is located at.
		double ratingA, ratingB;
		int yearA, yearB;

		cout << "Enter Two move titles: ";
		cin.get(); // found that this works best google FTW cin.ignore(); was skipping the first input.
		getline(cin, movieNameA); //Have to use getline to read white space and set string
		getline(cin, movieNameB);
		//firstLetter = movieName[0];
		cout << "When was it released? "; //flavor text but could be added in
		cin >> yearA >> yearB; //set year
		cout << "What is its IMDB rating? ";
		cin >> ratingA >> ratingB; // set rating
		if(ratingA > ratingB) // raiting sets recomend
		{
			cout << "I would recomend this movie: " << movieNameA << "\n\n"; //display Movie A
		}
		else 
		{
			cout << "I would recomend this movie: " << movieNameB << "\n\n"; //display Movie B
		}
		


	//Start problem 4
	cout << "#4" << endl;
		double a,b,c; // just used a simple var 
		double avg;
		double final;
		
		cout << "Enter your three grades for letter grade: " << '\n';
		cin >> a >> b >> c;
		final = a + b + c;
		avg = final/3;
		
		if(avg >= 90)
			cout << "A" << endl;
		else if(avg >= 80)
			cout << "B" << endl;
		else if(avg >= 70)
			cout << "C" << endl;
		else if(avg >= 60)
			cout << "D" << endl;
		else
			cout << "F" << '\n';
			
	//Start Problem 5
	cout << "#5" << endl;
	
	//Start Problem 6
	cout << "#6" << endl;
	return  0;
	
}