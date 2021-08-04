#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

int main()
{
	char inj_arr[1000];
	int words = 0;
	int size = 0;
	int max = 0;
	int first_symbol = 0;
	int max_first_symbol = 0;

	// Message
	cout << "Welcome!" << endl;
	cout << "Please enter any line: ";
	cin.getline(inj_arr, 1000);
	
	int j = 0;
	for (int i = 0; inj_arr[i - 1] != 0; i++)
	{
		if (((inj_arr[i] >= 'A' && inj_arr[i] <= 'Z') || 
			(inj_arr[i] >= 'a' && inj_arr[i] <= 'z')))
		{
			size++;

			if (j == 0)
			{
				first_symbol = i;
				j = 1;
			}
			
		}
		else
		{
			if (size > max)
			{
				max_first_symbol = first_symbol;
				max = size;
			}
			size = 0;
			j = 0;
		}
	}

	for (int i = max_first_symbol; i < max_first_symbol + max; i++)
	{
		cout << inj_arr[i];
	}


	// Message
	cout << endl << endl << "Thanks for using our program :)" << endl << endl;
}
