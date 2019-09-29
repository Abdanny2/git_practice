#include <iostream>

using namespace std;

int main()
{
	/* Program 1 - Lab 9 */

	int choice = 0;

	cout << "Enter a number between 1 and 5: "; cin >> choice;

	switch (choice) 
	{

	case 1: cout << "You chose number 1." << endl;
		break;
	case 2:  cout << "You chose number 2." << endl;
		break;
	case 3:  cout << "You chose number 3." << endl;
		break;
	case 4:  cout << "You chose number 4." << endl;
		break;
	case 5:  cout << "You chose number 5." << endl;
		break;
		 
	default: cout << "You chose incorrectly." << endl;

	}



	while (1);
	return 0;
 }