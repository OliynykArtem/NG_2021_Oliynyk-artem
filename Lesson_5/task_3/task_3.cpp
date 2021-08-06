#include <iostream>

using namespace std;

void string_input(char arr[])
{
	cout << "Welcome!" << endl;
	cout << "Please enter any line: ";
	cin.getline(arr, 1000);
}

void result(int words)
{
	cout << "Result - " << words << endl;
	cout << endl << endl << "Thanks for using our program :)" << endl << endl;
}

int count_words_2(char i, char j, int words)
{
	if (((i >= 'A' && i <= 'Z') || (i >= 'a' && i <= 'z')) &&
		(!((j >= 'A' && j <= 'Z') || (j >= 'a' && j <= 'z'))))
		words++;

	return words;
}

void count_words(char arr[])
{
	int words = 0;
	for (int i = 0; arr[i] != 0; i++)
		words = count_words_2(arr[i], arr[i + 1], words);

	result(words);
}

int main()
{
	char arr[1000];
	string_input(arr);
	count_words(arr);
}
