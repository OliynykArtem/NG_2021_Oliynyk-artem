#include <iostream>

using namespace std;

void assign_0(int cards[])
{
	for (int i = 0; i < 10; i++)
	{
		cards[i] = 0;
		cout << cards[i] << " ";
	}
}

int entering_card_number()
{
	int card_number = 0;
	cout << endl << "Na kakuyu kartu polizhit? ";
	cin >> card_number;

	return card_number;
}

int entering_the_amount_of_money()
{
	int amount_money = 0;
	cout << "Skolko? ";
	cin >> amount_money;

	return amount_money;
}

void result_output(int cards[], int sum)
{

	for (int i = 0; i < 10; i++)
	{
		cout << cards[i] << " ";
	}

	cout << endl << "Summa: " << sum << endl << endl;
}



int main()
{
	int cards[10];
	int card_number = 0;
	int amount_money = 0;
	int sum = 0;

	cout << "Welcome" << endl << endl;

	assign_0(cards);

	while (true)
	{
		card_number = entering_card_number();
		amount_money = entering_the_amount_of_money();
		cards[card_number - 1] += amount_money;
		sum += amount_money;

		result_output(cards, sum);
	}
}
