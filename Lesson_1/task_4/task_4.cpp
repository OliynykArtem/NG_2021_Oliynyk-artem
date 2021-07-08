#include <iostream>

using namespace std;

int main()
{
    float zarplata = 0;

    cout << "Vvedi svoyu zarplatu v baksakh: ";
    cin >> zarplata;

    if (zarplata <= 1000000)
    {
        if (zarplata > 1000)
        {
            cout << "Kruto!\n";
        }

        if (zarplata <= 1000)
        {
            cout << "Rabotai bolshe!\n";
        }

        cout << "no ti molodec!";
    }

    if (zarplata > 1000000)
    {
        cout << "Da ti millioner";
    }

}