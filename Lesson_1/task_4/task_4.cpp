#include <iostream>

using namespace std;

int main()
{
    float zarplata = 0;

    cout << "Vvedi svoyu zarplatu v baksakh: ";
    cin >> zarplata;

    if (zarplata < 1000001)
    {
        if (zarplata > 1000)
        {
            cout << "Kruto!" << endl;
        }

        if (zarplata < 1001)
        {
            cout << "Rabotai bolshe!" << endl;
        }

        cout << "no ti molodec!";
    }

    if (zarplata > 1000000)
    {
        cout << "Da ti millioner";
    }

}
