#include <iostream>

using namespace std;

int main()
{
	int size = 0;

	cout << "Welcome!" << endl;
	cout << "Christmas tree size: ";
	cin >> size;

	cout << endl;

	for (int i = 0; i < size; i++)
	{
		for (int j = size; j > i; j--)
		{
			cout << " ";
		}
		for (int k = 0; k <= i * 2; k++)
		{
			cout << "*";
		}
		cout << endl;
	}

	for (int i = 0; i < size; i++)
	{
		cout << " ";
	}

	cout << "*";

	cout << endl << endl << "Thanks for using our program :)" << endl << endl;
}

