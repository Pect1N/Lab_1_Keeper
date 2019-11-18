#include <iostream>
#include "Figures.h"
#include "Flat.h"
#include "Keeper.h"

using namespace std;

int main(void)
{
	Keeper* start;
	Keeper* finish;
	char vibor = 0;
	int vihod = 0;

	while (vihod != 1)
	{
		cout << "Chto delat?" << endl;
		cout << "1) Sozdat" << endl;
		cout << "2) Redaktirovat" << endl;
		cout << "3) Udalit" << endl;
		cout << "4) Sohranit" << endl;
		cout << "5) Zagruzit" << endl;
		cout << "6) Pokazat" << endl;
		cout << "7) Viiti" << endl;

		cin >> vibor;

		switch (vibor)
		{
		case '1':
		{

			break;
		}
		case '2':
		{

			break;
		}
		case '3':
		{

			break;
		}
		case '4':
		{

			break;
		}
		case '5':
		{

			break;
		}
		case '6':
		{

			break;
		}
		case '7':
		{
			vihod = 1;
			break;
		}
		default:
		{
			cout << "Wrong enter" << endl;
			system("pause");
			break;
		}
		}
		system("cls");
	}

	return 0;
}