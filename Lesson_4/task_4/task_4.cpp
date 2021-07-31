#include <iostream>

using namespace std;

int main()
{
	char inj_arr[1000];
	char char_out[26];
	int alphabet[26];
	int size = 0;
	int symbol = 0;

	// Сообщение пользователю
	cout << "Welcome!" << endl;
	cout << "Please enter any line: ";
	cin.getline(inj_arr, 1000);

	// Присваеваем каждому елементу массива значение 0
	for (int i = 0; i < 26; i++)
	{
		alphabet[i] = 0;
	}

	// Считаем количество каждой буквы в введённой пользователем строке
	for (int i = 0; inj_arr[i] != 0; i++)
	{
		if ((inj_arr[i] >= 'A' && inj_arr[i] <= 'Z'))
		{
			symbol = inj_arr[i] - 65;
			alphabet[symbol]++;
		}

		if ((inj_arr[i] >= 'a' && inj_arr[i] <= 'z'))
		{
			symbol = inj_arr[i] - 97;
			alphabet[symbol]++;
		}
	}

	// Сортируем и выводим количество букв
	for (int i = 0; i < 26; i++)
	{
		int max = 0;
		symbol = 0;

		for (int j = 0; j < 26; j++)
		{
			if (max < alphabet[j])
			{
				max = alphabet[j];
				char_out[i] = j + 97;
				symbol = j;
			}
		}
		alphabet[symbol] = 0;

		if (max != 0)
		{
			cout << char_out[i] << " - " << max << endl;
		}
	}

	// Сообщение пользователю
	cout << endl << endl << "Thanks for using our program :)" << endl << endl;
}
