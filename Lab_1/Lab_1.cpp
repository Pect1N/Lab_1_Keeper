#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "Figures.h"

using namespace std;

int main(void)
{
	int exit = 0;
	int exit_create = 0;
	int exit_create_flat = 0;
	int exit_create_voluminous = 0;
	int exit_delete = 0;
	int c = 0;
	int n = 0;
	while (exit != 1)
	{
		system("cls");
		cout << "What should we do?" << endl;
		cout << "1) Create new" << endl << "2) Delete" << endl << "3) Save" << endl << "4) Load" << endl << "5) Show Flat" << endl << "6) Show Voluminous" << endl << "7) Exit" << endl;
		cin >> c;
		switch (c)
		{
		case (1):
		{
			while (exit_create != 1)
			{
				system("cls");
				cout << "Which element should be created?" << endl;
				cout << "1) Flat" << endl << "2) Voluminous" << endl << "3) Exit" << endl;
				cin >> c;
				switch (c)
				{
				case (1):
				{
					while (exit_create_flat != 1)
					{
						system("cls");
						cout << "Enter type of element" << endl;
						cout << "1) Rectangle" << endl << "" << endl << "" << endl << "" << endl << "" << endl << "6) Exit" << endl;
						cin >> c;
						switch (c)
						{
						case (1):
						{
							// вызов создания квадрата
							break;
						}
						case (2):
						{
							break;
						}
						case (3):
						{
							break;
						}
						case (4):
						{
							break;
						}
						case (5):
						{
							break;
						}
						case (6):
						{
							exit_create_flat = 1;
							break;
						}
						default:
						{
							cout << "" << endl;
							system("pause");
							break;
						}
						}
					}
					break;
				}
				case (2):
				{
					while (exit_create_voluminous != 1)
					{
						system("cls");
						cout << "Enter type of element" << endl;
						cout << "1) Cube" << endl << "" << endl << "" << endl << "" << endl << "" << endl << "6) Exit" << endl;
						cin >> c;
						switch (c)
						{
						case (1):
						{
							// вызов создания куба
							break;
						}
						case (2):
						{
							break;
						}
						case (3):
						{
							break;
						}
						case (4):
						{
							break;
						}
						case (5):
						{
							break;
						}
						case (6):
						{
							exit_create_voluminous = 1;
							break;
						}
						default:
						{
							cout << "" << endl;
							system("pause");
							break;
						}
						}
					}
					break;
				}
				case (3):
				{
					exit_create = 1;
					break;
				}
				default:
				{
					cout << "Wrong number" << endl;
					system("pause");
					break;
				}
				}
			}
			break;
		}
		case (2):
		{
			while (exit_delete != 1)
			{
				system("cls");
				cout << "Which element should be deleted?" << endl;
				cout << "1) Flat" << endl << "2) Voluminous" << endl << "3) Exit" << endl;
				cin >> c;
				switch (c)
				{
				case (1):
				{
					system("cls");
					cout << "Enter number of element" << endl;
					// вывод списка плоских элементов
					cin >> n;
					// вызов метода удаления по n для плоских элементов
					break;
				}
				case (2):
				{
					system("cls");
					cout << "Enter number of element" << endl;
					// вывод списка объёмных элементов
					cin >> n;
					// вызов метода удаления по n для объёмных элементов
					break;
				}
				case (3):
				{
					exit_delete = 1;
					break;
				}
				default:
					cout << "Wrong number" << endl;
					system("pause");
					break;
				}
			}
			break;
		}
		case (3):
		{
			// вызов функции сохранения
			break;
		}
		case (4):
		{
			// вызов функции восстановления
			break;
		}
		case (5):
		{
			// вызов показа списка плоских фигур
			break;
		}
		case (6):
		{
			// вызов показа списка объёмных фигур
			break;
		}
		case (7):
		{
			exit = 1;
			break;
		}
		default:
		{
			cout << "Wrong number" << endl;
			system("pause");
			break;
		}
		}
	}
	cout << "Finished" << endl;

	return 0;
}