#include <iostream>

using namespace std;

int main()
{
	char inj_arr[1000];
	int size = 0;
	int max = 0;
	int first_symbol = 0;
	int max_first_symbol = 0;

	// Message
	cout << "Welcome!" << endl;
	cout << "Please enter any line: ";
	cin.getline(inj_arr, sizeof(inj_arr));

	int i = 0;
	while (inj_arr[i] != 0)
	{
		if (((inj_arr[i] >= 'A' && inj_arr[i] <= 'Z') ||
			(inj_arr[i] >= 'a' && inj_arr[i] <= 'z')))
		{
			size++;
		}
		else
		{
			if (size > max)
			{
				max_first_symbol = first_symbol + 1;
				max = size;
			}
			first_symbol = i;
			size = 0;
		}
		i++;
	}

	for (int i = max_first_symbol; i < max_first_symbol + max; i++)
	{
		cout << inj_arr[i];
	}

	// Message
	cout << endl << endl << "Thanks for using our program :)" << endl << endl;
}
