#include <iostream>
#include <random>
#include <time.h>
#include <conio.h>

using namespace std;

int main()
{
	int current_level = 0;
	int choice = 0;
	string a = " ---------------------------------";

	setlocale(LC_ALL, "");

	cout << a << endl << "\t1 - Начать игру" << endl << a;
	cout << endl << "\t2 - Выбрать уровень" << endl << a;
	cout << endl << "\t3 - Правила игры" << endl << a;
	cout << endl << "\t4 - Выход" << endl << a << endl << endl;
	cout << endl << " Ваш выбор: ";
	cin >> choice;

	system("cls");

	switch (choice)
	{
	case 1:
		current_level = 1;
		break;
	case 2:
		cout << a << endl << "\t1 - Уровень 1" << endl << a;
		cout << endl << "\t2 - Уровень 2" << endl << a;
		cout << endl << "\t3 - Уровень 3" << endl << a;
		cout << endl << "\t4 - Уровень 4" << endl << a;
		cout << endl << "\t5 - Уровень 5" << endl << a;
		cout << endl << "\t6 - Выход" << endl << a << endl << endl;
		cout << endl << " Ваш выбор: ";
		cin >> choice;

		system("cls");

		switch (choice)
		{
		case 1:
			current_level = 1;
			break;
		case 2:
			current_level = 2;
			break;
		case 3:
			current_level = 3;
			break;
		case 4:
			current_level = 4;
			break;
		case 5:
			current_level = 5;
			break;
		case 6:
			current_level = 6;
			break;
		}
		break;
	case 3:
		cout << " Приветствую!" << endl << endl << " Дорогой друг, твоя задача дойти к финишу, целым и невредимым." << endl
			<< " Одолевая множество препятствий на этом нелёгком пути," << endl
			<< " наполненом множеством врагов и приключений." << endl << endl;
		cout << " Игровые объекты:" << endl
			<< " @ - Твой персонаж" << endl
			<< " $ - Игровые очки" << endl
			<< " + - Аптечка" << endl
			<< " e - Враг" << endl
			<< " # - Стена" << endl
			<< " O - Переход на следуюший уровень" << endl << endl;
		cout << " Управление персонажем:" << endl
			<< " W - Вверх" << endl
			<< " A - Влево" << endl
			<< " D - Вправо" << endl
			<< " S - Вниз" << endl
			<< " Q - Выход из игры" << endl << endl;
		cout << a << endl << "\t1 - Начать игру" << endl << a
			<< endl << "\t2 - Выход" << endl << a << endl << endl;
		cin >> choice;

		system("cls");

		switch (choice)
		{
		case 1:
			current_level = 1;
			break;
		case 2:
			current_level = 6;
			break;
		}

		break;
	case 4:
		current_level = 6;
		break;
	}

	srand(time(0));

	int levels = 5;
	int exit = 0;
	char choice_move;

	// Message data
	//======================================
	int pl_health = 100;
	int money = 0;
	//======================================

	// Map data
	//======================================
	int heigth = 0;
	int width = 0;

	for (; current_level <= levels;)
	{
		switch (current_level)
		{
		case 1: heigth = 15; width = 30; break;
		case 2: heigth = 20; width = 40; break;
		case 3: heigth = 20; width = 55; break;
		case 4: heigth = 12; width = 100; break;
		case 5: heigth = 20; width = 80; break;
		}
		//======================================


			// Transition data
			//======================================
		int tPosX = 0;
		int tPosY = 0;

		switch (current_level)
		{
		case 1: tPosX = 26; tPosY = 12; break;
		case 2: tPosX = 24; tPosY = 8; 	break;
		case 3: tPosX = 7; 	tPosY = 2; 	break;
		case 4: tPosX = 95; tPosY = 9; 	break;
		case 5: tPosX = 76; tPosY = 17; break;
		}
		//======================================


		// Player data
		//======================================
		int pPosX = 0;
		int pPosY = 0;

		switch (current_level)
		{
		case 1:
		case 2: pPosX = 3; pPosY = 2; break;
		case 3: pPosX = 49; pPosY = 16; break;
		case 4: pPosX = 5; pPosY = 5; break;
		case 5: pPosX = 75; pPosY = 13; break;
		}
		int newPPosX = pPosX;
		int newPPosY = pPosY;
		//======================================


		// Enemy data
		//======================================
		int amount_enemy = 0;
		vector <int> enemyPosX;
		vector <int> enemyPosY;

		switch (current_level)
		{
		case 1: amount_enemy = 5; break;
		case 2: amount_enemy = 20; break;
		case 3: amount_enemy = 30; break;
		case 4: amount_enemy = 55; break;
		case 5: amount_enemy = 75; break;
		}

		enemyPosX.resize(amount_enemy);
		enemyPosY.resize(amount_enemy);
		//======================================


		// Dynamic array initialization
		//======================================
		char** map = new char* [heigth];
		for (int i = 0; i < heigth; i++)
		{
			map[i] = new char[width];
		}
		//======================================


		// Map Generation
		//======================================
		for (int i = 0; i < heigth; i++)
		{
			for (int j = 0; j < width; j++)
			{
				int choice = rand() % 120;

				switch (choice)
				{
				case 1:
				case 2:
				case 3:
				case 4: map[i][j] = '$'; break;
				case 5: map[i][j] = '+'; break;
				default: map[i][j] = '.'; break;
				}
			}

			// Draw walls on a map
			switch (current_level)
			{
			case 1:
				for (int j = 0; j < width; j++)
				{
					if (i == 0 || i == heigth - 1 || j == 0 || j == width - 1 ||
						(i == 4 && j < 24) || (i == 9 && j > 5))
					{
						map[i][j] = '#';
					}
				}
				break;
			case 2:
				for (int j = 0; j < width; j++)
				{
					if (i == 0 || i == heigth - 1 || j == 0 || j == width - 1 ||
						(i < 16 && j == 8) ||
						(i == 15 && j > 7 && j < 31) ||
						(i < 16 && i > 4 && j == 31) ||
						(i == 5 && j > 16 && j < 31) ||
						(i > 4 && i < 12 && j == 17))
					{
						map[i][j] = '#';
					}
				}
				break;
			case 3:
				for (int j = 0; j < width; j++)
				{
					if (i == 0 || i == heigth - 1 || j == 0 || j == width - 1 ||
						((j == 13 || j == 14 || j == 40 || j == 41) && (i < 7 || i > 12)) ||
						((i == 6 || i == 7 || i == 12 || i == 13) && (j > 20 && j < 34)))
					{
						map[i][j] = '#';
					}
				}
				break;
			case 4:
				for (int j = 0; j < width; j++)
				{
					if (i == 0 || i == heigth - 1 || j == 0 || j == width - 1 ||
						(i == 4 && ((j > 20 && j < 30) || (j > 50 && j < 60) || (j > 80 && j < 90))) ||
						(i == 7 && ((j > 10 && j < 20) || (j > 40 && j < 50) || (j > 70 && j < 80))) ||
						((j == 10 || j == 11 || j == 40 || j == 41 || j == 70 || j == 71) && i < 8) ||
						((j == 30 || j == 29 || j == 60 || j == 59 || j == 90 || j == 89) && i > 3))
					{
						map[i][j] = '#';
					}
				}
				break;
			case 5:
				for (int j = 0; j < width; j++)
				{
					if (i == 0 || i == heigth - 1 || j == 0 || j == width - 1 ||
						((j == 19 || j == 20 || j == 39 || j == 40 || j == 59 || j == 60) && i < 11) ||
						((j == 9 || j == 10 || j == 29 || j == 30 || j == 49 || j == 50 || j == 69 || j == 70) && (i < 16 && i > 4)) ||
						(i == 15 && j > 10))
					{
						map[i][j] = '#';
					}
				}
				break;
			}
		}


		// Spawning enemies
		//=============================================
		for (int i = 0; i < amount_enemy; i++)
		{
			enemyPosX[i] = rand() % width;
			enemyPosY[i] = rand() % heigth;

			if (map[enemyPosY[i]][enemyPosX[i]] == '#')
			{
				i--;
			}
			else
			{
				map[enemyPosY[i]][enemyPosX[i]] = 'e';
			}
		}
		//==============================================


		while (exit == 0)
		{

			// Update enemy position
			//====================================================
			for (int i = 0; i < amount_enemy; i++)
			{
				int enemyMove = rand() % 6;
				int ePosX = enemyPosX[i];
				int ePosY = enemyPosY[i];
				map[ePosY][ePosX] = '.';
				switch (enemyMove) {
				case 0: if (map[ePosY - 1][ePosX] == '.') ePosY--; break;
				case 1: if (map[ePosY][ePosX + 1] == '.') ePosX++; break;
				case 2: if (map[ePosY + 1][ePosX] == '.') ePosY++; break;
				case 3: if (map[ePosY][ePosX - 1] == '.') ePosX--; break;
				}
				enemyPosX[i] = ePosX;
				enemyPosY[i] = ePosY;

				map[ePosY][ePosX] = 'e';
			}
			//======================================


			if (map[newPPosY][newPPosX] == '#')
			{
				newPPosX = pPosX;
				newPPosY = pPosY;
			}
			else
			{
				pPosX = newPPosX;
				pPosY = newPPosY;
			}

			switch (map[pPosY][pPosX])
			{
			case '$': map[pPosY][pPosX] = '.'; money++; break;
			case 'e': pl_health = pl_health - 25; break;
			case '+': map[pPosY][pPosX] = '.'; pl_health = pl_health + 25; break;
			}

			if (map[pPosY][pPosX] == 'O')
			{
				current_level++;
				break;
			}

			if (pl_health <= 0)
			{
				exit = 1;
				current_level = 6;
			}

			system("cls");

			// Message output
			//======================================
			cout << " Уровень " << current_level << endl << endl;
			cout << " $ = " << money << "\tЗдоровье: " << pl_health << endl << endl;
			cout << " Управление персонажем: W - вверх  A - влево  D - вправо  S - вниз Q - выход" << endl << endl;
			//======================================


			// Transition
			//======================================
			map[tPosY][tPosX] = 'O';
			//======================================


			// Map output
			//======================================
			for (int i = 0; i < heigth; i++)
			{
				cout << " ";
				for (int j = 0; j < width; j++)
				{
					if (pPosX == j && pPosY == i)
					{
						cout << "@";
					}
					else
					{
						cout << map[i][j];
					}
				}
				cout << endl;
			}
			//======================================


			// Player move
			//======================================
			choice_move = _getch();

			switch (choice_move)
			{
			case 'W':
			case 'w': newPPosY--; break;
			case 'S':
			case 's': newPPosY++; break;
			case 'A':
			case 'a': newPPosX--; break;
			case 'D':
			case 'd': newPPosX++; break;
			case 'Q':
			case 'q': exit = 1; current_level = 6; break;
			}
			//======================================
		}

		// Deleting a dynamic array
		//======================================
		for (int i = 0; i < heigth; i++)
		{
			delete[] map[i];
		}
		delete[] map;
		//======================================
	}
	system("cls");

	cout << a << endl << "\t     Конец" << endl << endl
		<< "\t  Ваш счёт: " << money << " $" << endl << a << endl << endl << endl;
	cout << "Для выхода нажмите \"Enter\" ";
	getchar(), getchar();
}
