#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

int main()
{
	char inj_arr[1000];
	int word_len[50];
	int firsts_symbols[50];
	int words = 0;
	int size = 0;
	int max = 0;
	int word_num = 0;

	// Сообщение пользователю
	cout << "Welcome!" << endl;
	cout << "Please enter any line: ";
	cin.getline(inj_arr, 1000);

	// Присваеваем каждому елементу массива значение 0
	for (int i = 0; i < 50; i++)
	{
		word_len[i] = 0;
	}
	
	// Ненужные символы, введенной пользователем строки меняем на 0 
	for (int i = 0; inj_arr[i] != 0; i++)
	{
		if (!((inj_arr[i] >= 'A' && inj_arr[i] <= 'Z') || (inj_arr[i] >= 'a' && inj_arr[i] <= 'z')))
		{
			inj_arr[i] = 0;
		}
		size++;
	}

	// Считаем количество слов
	for (int i = 0; i < size; i++)
	{
		if (inj_arr[i] != 0 && inj_arr[i + 1] == 0)
		{
			words++;
		}
	}

	// Считаем сколько символов в каждом слове
	int j = 0;
	for (int i = 0; i < words; i++)
	{
		for (int k = 0; ; j++)
		{
			if (inj_arr[j] == 0 && inj_arr[j + 1] != 0)
			{
				j++;
				break;
			}

			if (inj_arr[j] != 0)
			{
				word_len[i] += 1;

				// Запоминаем место первого символа каждого слова
				if (k == 0)
				{
					firsts_symbols[i] = j;
					k = 1;
				}
			}
			else
			{
				continue;
			}
		}
	}
	
	// Находим самое большое слово
	max = word_len[0];
	for (int i = 0; i < words; i++)
	{
		if (max < word_len[i])
		{
			max = word_len[i];
			word_num = i;
		}
	}

	// Выводим слово на консоль
	for (int i = firsts_symbols[word_num]; inj_arr[i] != 0; i++)
	{
		cout << inj_arr[i];
	}

	// Сообщение пользователю
	cout << endl << endl << "Thanks for using our program :)" << endl << endl;
}
