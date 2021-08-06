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

void tree_output_1(int size, int i = 0)
{
	for (int j = size; j > i; j--)
	{
		cout << " ";
	}
}

int tree_output_2(int size)
{
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		tree_output_1(size, i);

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
	tree_output_1(size);

	cout << "*";
}



int main()
{
	tree_trunk_output(tree_output_2(set_size()));
	cout << endl << endl << "Thanks for using our program :)" << endl << endl;
}