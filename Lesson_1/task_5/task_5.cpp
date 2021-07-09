#include <iostream>

using namespace std;

int main()
{
    double pervoye_chislo = 0;
    double vtoroye_chislo = 0;
    short deistvie = 0;

    cout << "Vvedite pervoe chislo: ";
    cin >> pervoye_chislo;
    cout << "Vvedite vtoroe chislo: ";
    cin >> vtoroye_chislo;
    cout << "Vvedite deistvie: ";
    cin >> deistvie;

    switch (deistvie)
    {
        case 1:
            pervoye_chislo += vtoroye_chislo;
            break;
        case 2:
            pervoye_chislo -= vtoroye_chislo;
            break;
        case 3:
            pervoye_chislo *= vtoroye_chislo;
            break;
        case 4:
            pervoye_chislo /= vtoroye_chislo;
            break;
        default:
            cout << "nevernoye deystviye!";
    }

    if (deistvie > 0 && deistvie < 5)
    {
        cout << "Resultat: " << pervoye_chislo;
    }
}
