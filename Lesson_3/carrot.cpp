#include <iostream>

using namespace std;

int main()
{
	char inj_arr[1000];
	char symbol = 0;

	cout << "Enter this wonderful text: " << endl;
	cin.getline(inj_arr, sizeof(inj_arr));

	cout << endl;
	for (int i = 0; inj_arr[i] != 0; i++)
	{
		if (inj_arr[i] >= 'j' && inj_arr[i] <= 'z')
		{
			symbol = inj_arr[i] - 10;
		}
		else if (inj_arr[i] >= 'a' && inj_arr[i] <= 'i')
		{
			symbol = inj_arr[i] + 16;
		}
		else
		{
			symbol = inj_arr[i];
		}
		cout << symbol;
	}
	cout << endl;
}
