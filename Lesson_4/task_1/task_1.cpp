﻿#include <iostream>

using namespace std;

int main()
{
	char arr[1000];
	int words = 0;
	int size = 0;

	cout << "Welcome!" << endl;
	cout << "Please enter any line: ";
	cin.getline(arr, 1000);

	for (int i = 0; arr[i] != 0; i++)
	{
		if (!((arr[i] >= 'A' && arr[i] <= 'Z') || (arr[i] >= 'a' && arr[i] <= 'z')))
		{
			arr[i] = 0;
		}
		size++;
	}

	for (int i = 0; i < size; i++)
	{
		if (arr[i] != 0 && arr[i + 1] == 0)
		{
			words++;
		}
	}

	cout << "Result - " << words << endl;
	cout << endl << endl << "Thanks for using our program :)" << endl << endl;
}
