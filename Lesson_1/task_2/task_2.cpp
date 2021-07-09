#include <iostream>

using namespace std;

int main()
{
    double chislo_1 = 0;
    double chislo_2 = 0;

    cout << "Vvedite pervoe chislo: ";
    cin >> chislo_1;
    cout << "Vvedite vtoroe chislo: ";
    cin >> chislo_2;

    chislo_1 += chislo_2;

    cout << "Summa: " << chislo_1;
}
