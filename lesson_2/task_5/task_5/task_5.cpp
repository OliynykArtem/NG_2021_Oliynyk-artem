#include <iostream>

using namespace std;

int main()
{
	int size = 0;

	cout << "Welcome!" << endl;
	cout << "Christmas tree size: ";
	cin >> size;

	cout << endl;

	for (int i = 0, r = size * 2 - 1 ; i < size; i++, r -= 2)
	{
		for (int j = size - 1; i < j; j--)
		{
			cout << " ";
		}

		for (int k = size * 2; r < k; k--)
		{
			cout << "*";
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

