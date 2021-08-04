#include <iostream>

using namespace std;

int set_size()
{
	int size = 0;
	cout << "Welcome!" << endl;
	cout << "Christmas tree size: ";
	cin >> size;

	return size;
}

int tree_output(int size)
{
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
	return size;
}

void tree_trunk_output(int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << " ";
	}

	cout << "*";
}

int main()
{
	tree_trunk_output(tree_output(set_size()));
	cout << endl << endl << "Thanks for using our program :)" << endl << endl;
}