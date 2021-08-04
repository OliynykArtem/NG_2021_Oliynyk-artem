#include <iostream>

using namespace std;

int count_words(char arr[])
{
	int words = 0;
	for (int i = 0; arr[i] != 0; i++)
	{
		if (((arr[i] >= 'A' && arr[i] <= 'Z') || (arr[i] >= 'a' && arr[i] <= 'z')) &&
			(!((arr[i + 1] >= 'A' && arr[i + 1] <= 'Z') || (arr[i + 1] >= 'a' && arr[i + 1] <= 'z'))))
		{
			words++;
		}
	}
	return words;
}

void data_input(char arr[])
{
	cout << "Welcome!" << endl;
	cout << "Please enter any line: ";
	cin.getline(arr, 1000);
}

void data_output(char arr[])
{
	cout << "Result - " << count_words(arr) << endl;
	cout << endl << endl << "Thanks for using our program :)" << endl << endl;
}

int main()
{
	char arr[1000];
	data_input(arr);
	data_output(arr);
}
