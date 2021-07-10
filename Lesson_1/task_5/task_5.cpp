#include <iostream>

using namespace std;

int main()
{
    double pervoye_chislo = 0;
    double vtoroye_chislo = 0;
    short deistvie = 0;

    cout << "Dodro pozalovat v kalkulyator!" << endl;

    cout << "Vvedite pervoe chislo: ";
    cin >> pervoye_chislo;
    cout << "Vvedite vtoroe chislo: ";
    cin >> vtoroye_chislo;
    cout << endl << "Vvedite deistvie. " << endl << endl
        << "1 - dobavit" << endl 
        << "2 - otnyat" << endl 
        << "3 - umnozhit" << endl 
        << "4 - podelit" << endl << endl;
    cout << "Vash vibor: ";
    cin >> deistvie;

    if (deistvie > 0 && deistvie < 5)
    {
        cout << endl << "Resultat: ";
    }

    switch (deistvie)
    {
        case 1:
            cout << pervoye_chislo + vtoroye_chislo;
           break;
        case 2:
            cout << pervoye_chislo - vtoroye_chislo;
           break;
        case 3:
            cout << pervoye_chislo * vtoroye_chislo;
           break;
        case 4:
            cout << pervoye_chislo / vtoroye_chislo;
           break;
        default:
            cout << endl << "Sluchilas oshibka!"<< endl 
                <<"Vi vveli nevernoye chislo!"<< endl
                <<"Poprobuyte yescho raz :)";
    }
    cout << endl << endl << "Spasibo chto vi polzuetes nashey programmoy! :)" << endl << endl;
}
