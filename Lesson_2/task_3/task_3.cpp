#include <iostream>

using namespace std;

int main()
{
    int Square_size = 0;

    cout << "Welcome" << endl;
    cout << "Square size: ";
    cin >> Square_size;

    cout << endl;

    for (int i = 0; i < Square_size; i++)
    {
        for (int j = 0; j < Square_size; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl << endl << "Thanks for using our program :)" << endl << endl;
}
