#include <iostream>

using namespace std;

int main()
{
    int stars = 0;

    cout << "Welcome!" << endl;
    cout << "Please enter how many stars do you want to see on the screen: ";
    cin >> stars;

    cout << endl;

    for (int i = 0; i < stars; i++)
    {
        cout << "*";
    }

    cout << endl << endl << "Thanks for using our program :)" << endl << endl;
}

