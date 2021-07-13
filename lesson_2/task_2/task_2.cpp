#include <iostream>

using namespace std;

int main()
{
    int number = 0;

    cout << "Welcome!" << endl;
    cout << "Enter number: ";
    cin >> number;

    cout << endl <<"Numbers: ";

    for (int i = 0; i <= number; i++)
    {
        cout << i << ", ";
    }

    cout << endl << endl << "Thanks for using our program :)" << endl << endl;
}

