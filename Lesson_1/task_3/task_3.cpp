#include <iostream>

using namespace std;

int main()
{
	int N = 0;
	int M = 0;
	int K = 0;

	cout << "Skolko nuzhno oreshkov: ";
	cin >> N;
	cout << "Skolko sobrala shishok: ";
	cin >> M;
	cout << "Skolko oreshkov v shishke: ";
	cin >> K;

	if ((M * K) >= N)
	{
		cout << "OK";
	}
	else
	{
		cout << "NO";
	}
}
