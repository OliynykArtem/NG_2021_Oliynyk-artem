#include <iostream>

using namespace std;

int main()
{
	int choice = 0;

	setlocale(LC_ALL, "Russian");
	cout << "Привет студент!" << endl << "Ты попал в мир ЦНТУ." << endl;
	cout << "Готов ли ты стать на поприще науки и знаний?" << endl << endl;
	cout << "1 - Да, я готов! Ведь я за этим пришел сюда!" << endl << "2 - Нет, ибо я хочу гулять а не учиться." << endl << endl;
	cout << "Твой выбор: ";
	cin >> choice;

	system("cls");

	switch(choice)
	{
	case 1:
		cout << "Молодец! Ты принял правильное решение." << endl << endl;
		cout << "Для продолжения нажми \"Enter\"" << endl;
		getchar();
		getchar();

		system("cls");

		cout << "Сейчас идет лекция." << endl << "Что выберешь?" << endl << endl;
		cout << "1 - Внимательно слушать и записывать." << endl << "2 - Просто слушать, так как я понимаю всё с первого раза." << endl << endl;
		cout << "Твой выбор: ";
		cin >> choice;

		system("cls");

		switch (choice)
		{
		case 1:
			cout << "Лекция была тяжелая, как хорошо что ты всё записал." << endl << "Но твой друг ничего не записывал, и просит тебя дать свой конспект." << endl << endl;
			cout << "1 - Дать ему конспект." << endl << "2 - Обойдется" << endl << endl;
			cout << "Твой выбор: ";
			cin >> choice;

			system("cls");

			switch (choice)
			{
			case 1:
				cout << "Отлично! Ты помог другу с конспектом." << endl << "В свою очередь, друг поможет в чем-то другом," << endl << "ведь работа в команде это круто!" << endl;
				cout << "Для продолжения нажми \"Enter\"" << endl;
				getchar();
				getchar();

				system("cls");

				break;
			case 2:
				cout << "Друг обиделся на тебя, болеше нет у тебя друга." << endl << endl;
				cout << "1 - Попросить прощения " << endl << "2 - Остаться без друзей" << endl << endl;
				cout << "Твой выбор: ";
				cin >> choice;

				system("cls");

				switch (choice)
				{
				case 1:
					cout << "Друг простил тебя." << endl << "В селедующий раз цени дружбу!";
					break;
				case 2:
					cout << "Это твой выбор.";
					break;
				}
				cout << endl << endl <<"Для продолжения нажми \"Enter\"" << endl;
				getchar();
				getchar();

				system("cls");

				break;
			}
			break;
		case 2:
			cout << "Лекция была тяжелая, но ты ничего не записал." << endl << "У твоего друга есть конспект лекции, может попросить?" << endl << endl;
			cout << "1 - Попросить" << endl << "2 - Нет, сам найду эту тему в интернете " << endl << endl;
			cout << "Твой выбор: ";
			cin >> choice;

			system("cls");

			switch (choice)
			{
			case 1:
				cout << "Ура! Друг поделился конспектом. Цени дружбу!";
				break;
			case 2:
				cout << "Молодец! Ты долго искал, но все же нашел!";
				break;
			}
			cout << endl << endl << "Для продолжения нажми \"Enter\"" << endl;
			getchar();
			getchar();

			system("cls");

			cout << "Ты всё выучил." << endl << "У тебя много знаний." << endl << "Скоро экзамен, и ты легко его сдашь!" << endl << endl;
			cout << "Для продолжения нажми \"Enter\"" << endl;
			getchar();

			system("cls");

			cout << "Вот и экзамен. Что выберешь?" << endl << endl;
			cout << "1 - Тянуть билет" << endl << "2 - Пройти тест" << endl << endl;
			cout << "Твой выбор: ";
			cin >> choice;

			system("cls");

			cout << "Молодец! Ты сдал экзамен. Ждем тебя на втором курсе :)" << endl << endl;
			break;
		}
		break;

	case 2:
		cout << "Это твой выбор." << endl << endl;
		cout << "Для продолжения нажми \"Enter\"" << endl;
		getchar();
		getchar();

		system("cls");

		cout << "Сейчас идет лекция." << endl << "Что выберешь?" << endl << endl;
		cout << "1 - Прогулять." << endl << "2 - Поспать на лекции." << endl << endl;
		cout << "Твой выбор: ";
		cin >> choice;

		system("cls");

		switch (choice)
		{
		case 1:
			cout << "Ты прогулял лекцию." << endl << "Чтож, впереди Экзамен, нелегко тебе прийдется.";
			break;
		case 2:
			cout << "Ты проспал лекцию." << endl << "Чтож, впереди Экзамен, нелегко тебе прийдется.";
			break;
		}
		cout << endl << endl << "Для продолжения нажми \"Enter\"" << endl;
		getchar();
		getchar();

		system("cls");

		cout << "Вот и экзамен, но ты ничего незнаешь." << endl << endl;
		cout << "1 - Попробовать сдать" << endl << "2 - Дать взятку" << endl << endl;
		cout << "Твой выбор: ";
		cin >> choice;

		system("cls");

		switch (choice)
		{
		case 1:
			cout << "К сожалению, ты не сдал экзамен и тебя отчислили :(" << endl << endl;
			break;
		case 2:
			cout << "К сожалению в ЦНТУ взятки не берут. У тебя ноль знаний. Ты отчислен. :(" << endl << endl;
			break;
		}
		break;
	}
	cout << "\t\t _________\n\t\t|         |\n\t\t|  Конец  |\n\t\t|_________|\n\n";
}

