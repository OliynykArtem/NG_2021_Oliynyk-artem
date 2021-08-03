#include <iostream>

using namespace std;

int main()
{
	char arr[1000];
	int words = 0;

	cout << "Welcome!" << endl;
	cout << "Please enter any line: ";
	cin.getline(arr, 1000);

	for (int i = 0; arr[i] != 0; i++)
	{
		if (((arr[i] >= 'A' && arr[i] <= 'Z') || (arr[i] >= 'a' && arr[i] <= 'z')) && 
		  (!((arr[i + 1] >= 'A' && arr[i + 1] <= 'Z') || (arr[i + 1] >= 'a' && arr[i + 1] <= 'z'))))
		{
			words++;
		}
	}

	cout << "Result - " << words << endl;
	cout << endl << endl << "Thanks for using our program :)" << endl << endl;
}
