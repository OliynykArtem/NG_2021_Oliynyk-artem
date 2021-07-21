#include <iostream>

using namespace std;

int main()
{
	int values[20];
	int max = 0;

	cout << "Welcome!" << endl << endl;
	cout << "Enter 20 values" << endl;
	cout << "Enter \"0\" if you want to finish typing" << endl << endl;
	cout << "Values:" << endl;

	for (int i = 0; i < 20; i++)
	{
		cout << i + 1 << " - ";
		cin >> values[i];
		if (values[i] == 0)
		{
			break;
		}
	}

	max = values[0];

	for (int i = 1; i < 20; i++)
	{
		if (max < values[i])
		{
			max = values[i];
		}
	}

	for (int i = 0; values[i] != 0 && i < 20; i++)
	{
		for (int j = 0; (max - values[i])/2 > j; j++)
		{
			cout << " ";
		}

		for (int k = 0; k < values[i]; k++)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << endl << endl << "Thanks for using our program :)" << endl << endl;
}
