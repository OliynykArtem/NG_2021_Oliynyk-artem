#include <iostream>

using namespace std;

int main()
{
    int size = 0;

    cout << "Welcome!" << endl;
    cout << "Enter size: ";
    cin >> size;

    for (int i = 0; i <= size ; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i <= size; i++)
    {
        for (int j = size; j > i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }


    for (int i = 0; i <= size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        for (int k = size; k > i; k--)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = size - 1; j > i; j--)
        {
            cout << " ";
        }

        for (int k = 0; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl << endl << "Thanks for using our program :)" << endl << endl;

}
