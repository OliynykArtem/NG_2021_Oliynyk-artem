#include <iostream>

using namespace std;

int main()
{
	cout << "Welcome!" << endl;
	cout << "please enter the numbers of ten schools" << endl << endl;

	int school_numbers[10];
	int our_school = 0;
	string message;
	for (int i = 0; i < 10; i++)
	{
		cout << i + 1 << ".school Number: ";
		cin >> school_numbers[i];
	}

	cout << endl << "Please enter your school number: ";
	cin >> our_school;

	for (int i = 0; i < 10; i++)
	{
		if (our_school == school_numbers[i])
		{
			message = "I know this school";
		}
	}

	if (message != "I know this school")
	{
		message = "I don't know this school";
	}

	cout << endl << message << endl;

	cout << endl << endl << "Thanks for using our program :)" << endl << endl;
}
