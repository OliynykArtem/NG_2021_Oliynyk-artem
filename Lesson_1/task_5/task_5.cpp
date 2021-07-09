#include <iostream>

using namespace std;

int main()
{
    int pervoye_chislo = 0;
    int vtoroye_chislo = 0;
    int deistvie = 0;

    cout << "Vvedite pervoe chislo: ";
    cin >> pervoye_chislo;
    cout << "Vvedite vtoroe chislo: ";
    cin >> vtoroye_chislo;
    cout << "Vvedite deistvie: ";
    cin >> deistvie;

    switch (deistvie)
    {
    case 1:
        cout << "Resultat: " << pervoye_chislo + vtoroye_chislo;
        break;
    case 2:
        cout << "Resultat: " << pervoye_chislo - vtoroye_chislo;
        break;
    case 3:
        cout << "Resultat: " << pervoye_chislo * vtoroye_chislo;
        break;
    case 4:
        cout << "Resultat: " << pervoye_chislo / vtoroye_chislo;
        break;
    default:
        cout << "nevernoye deystviye!";
    }
}
