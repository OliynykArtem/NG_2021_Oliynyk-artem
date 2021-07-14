#include <iostream>

using namespace std;

int main()
{
	int size = 0;
	int row = 0;

	cout << "Welcome!" << endl;
	cout << "Christmas tree size: ";
	cin >> size;

	cout << endl;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size + i; j++)
		{
			j < size - i - 1 ? cout << " " : cout << "*";
		}
		cout << endl;
	}

	for (int i = 0; i < size - 1; i++)
	{
		cout << " ";
	}

	cout << "*";

	cout << endl << endl << "Thanks for using our program :)" << endl << endl;
}

