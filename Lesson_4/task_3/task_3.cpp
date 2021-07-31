#include <iostream>

using namespace std;

int main()
{
	char inj_arr[1000];

	// Сообщение пользователю
	cout << "Welcome!" << endl;
	cout << "Please enter any line: ";
	cin.getline(inj_arr, 1000);

	cout << endl;

	// Переводим буквы из нижнего регистра в верхний
	for (int i = 0; inj_arr[i] != 0; i++)
	{
		if ((inj_arr[i] >= 'a' && inj_arr[i] <= 'z'))
		{
			inj_arr[i] -= 32;
		}
		cout << inj_arr[i];
	}

	// Сообщение пользователю
	cout << endl << endl << "Thanks for using our program :)" << endl << endl;
}
