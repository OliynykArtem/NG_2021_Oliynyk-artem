#include <iostream>

using namespace std;

int main()
{
    int nambers[5];
    int max = 0;

    cout << "Welcome!" << endl;
    cout << "Please enter 5 values:" << endl << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Values " << i + 1 << ": ";
        cin >> nambers[i];
    }

    max = nambers[0];

    for (int i = 1; i < 5; i++)
    {
        if (max < nambers[i]) 
        {
            max = nambers[i]; 
        }
    }

    cout << endl;

    for (int i = 0; i < max; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            nambers[j] > i ? cout << "*" : cout << " ";
        }
        cout << endl;
    }
    cout << endl << endl << "Thanks for using our program :)" << endl << endl;
}
