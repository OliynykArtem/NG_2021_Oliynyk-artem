#include <iostream>

using namespace std;

int main()
{
    float zarplata = 0;

    cout << "Vvedi svoyu zarplatu v baksakh: ";
    cin >> zarplata;

    if (zarplata > 1000)
    {
        if (zarplata < 1000001)
        {
            cout << "Kruto!" << endl;
        }
    }

    if (zarplata < 1001)
    {
        cout << "Rabotai bolshe!" << endl;
    }

    if (zarplata > 1000000)
    {
        cout << "Da ti millioner" << endl;
    }

    cout << "No ti molodec!";
}
