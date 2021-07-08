#include <iostream>

using namespace std;

int main()
{
	int oreshki__N = 0;
	int shishki__M = 0;
	int oresh_v_shish__K = 0;

	cout << "Skolko nuzhno oreshkov: ";
	cin >> oreshki__N;
	cout << "Skolko sobrala shishok: ";
	cin >> shishki__M;
	cout << "Skolko oreshkov v shishke: ";
	cin >> oresh_v_shish__K;

	if ((shishki__M * oresh_v_shish__K) >= oreshki__N)
	{
		cout << "OK";
	}
	else
	{
		cout << "NO";
	}
}
