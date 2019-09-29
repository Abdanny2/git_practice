#include <iostream>


using namespace std;

int main()
{
	// Lab 9 - Extra Credit
	
	char decision = '0';

	while (decision!='x')
	{
	char letter = '0';

	cout << "Enter a letter from the name \"Franklin\"." << endl;
	cin >> letter;

	letter = tolower(letter);

	switch (letter)
	{

	case 'a': case 'i': cout << "The letter entered is a vowel." << endl;
		break;

	case 'f': case 'r': case 'n': case 'k': case 'l': cout << "The letter entered is a consonant." << endl;
		break;

	default: cout << "Not part of the word \"Franklin\"." << endl;

	}
	cout << "\n";

	
	cout << "Press x to quit (anything else to keep going)" << endl;
	
	cin >> decision;
	cout << "\n";

	}

	while (1);
	return 0;
}