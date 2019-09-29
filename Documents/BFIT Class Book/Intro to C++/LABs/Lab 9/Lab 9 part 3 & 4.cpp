#include <iostream>

using namespace std;

int main()
{
	// Lab 9 part 3

	char letter = '0';

	cout << "Enter a letter from the name \"Franklin\"." << endl;
	cin >> letter;

	switch (letter)
	{

	case 'a': case 'i': cout << "The letter entered is a vowel." << endl;
		break;

	case 'F': case 'f': case 'r': case 'n': case 'k': case 'l': cout << "The letter entered is a consonant." << endl;
		break;

	default: cout << "Not part of the word \"Franklin\"." << endl;

	}
	cout << "\n\n";

	
	//Part 4 - Repeat part 3 with if statement

	cout << "Enter a letter from the name \"Franklin\"." << endl;
	cin >> letter;

	if (letter == 'a' || letter == 'i')
	{
		cout << "The letter entered is a vowel." << endl;
	}
	else if (letter== 'F' || letter =='f' || letter=='r'||letter =='n'|| letter=='k'||letter=='l') 
	{
		cout << "The letter entered is a consonant." << endl;
	}
	else 
	{
		cout << "Not part of the word \"Franklin\"." << endl;
	}

	while (1);
	return 0;
}