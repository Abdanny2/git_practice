#include <iostream>

using namespace std;

int main()
{
/*Lab 9 - Part 2*/

	int num = 0, cond=0;
	cout << "Enter a number between 1 and 10: "; cin >> num;
	

	switch (num)
	{
	case 2: case 4: case 6: case 8: case 10: cout << "Even number." << endl;
		break;
	case 1: case 3: case 5: case 7: case 9: cout << "Odd number." << endl;
		break;
	default: cout << "Bad input" << endl;
	}





	while (1);
	return 0;
}