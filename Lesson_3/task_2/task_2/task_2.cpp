#include <iostream>

using namespace std;

int main()
{
	int cards[10];
	int card_number = 0;
	int amount_money = 0;

	cout << "Welcome" << endl << endl;

	for (int i = 0; i < 10; i++)
	{
		cards[i] = 0;
		cout << cards[i] << " ";
	}

	while (true)
	{
		
		cout << endl << "Na kakuyu kartu polizhit? ";
		cin >> card_number;
		cout << "Skolko? ";
		cin >> amount_money;

		cards[card_number - 1] += amount_money;

		for (int i = 0; i < 10; i++)
		{
			cout << cards[i] << " ";
		}

		cout << endl << "Summa: " << cards[card_number - 1] << endl << endl;

	}
}
