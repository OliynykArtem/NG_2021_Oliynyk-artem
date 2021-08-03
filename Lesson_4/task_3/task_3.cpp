#include <iostream>

using namespace std;

int main()
{
	char inj_arr[1000];
	char arr[1000];

	// Message
	cout << "Welcome!" << endl;
	cout << "Please enter any line: ";
	cin.getline(inj_arr, 1000);

	cout << endl;

	// Converting letters from lower to upper case
	for (int i = 0; inj_arr[i] != 0; i++)
	{
		arr[i] = inj_arr[i];
		if ((inj_arr[i] >= 'a' && inj_arr[i] <= 'z'))
		{
			arr[i] -= 32;
		}
		cout << arr[i];
	}

	// Message
	cout << endl << endl << "Thanks for using our program :)" << endl << endl;
}
