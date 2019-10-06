#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "Figures.h"

using namespace std;

int main(void)
{
	int exit = 0;
	int c = 0;
	Flat rectangle;
	while (exit != 1)
	{
		system("cls");
		cout << "What should we do?" << endl;
		cout << "1) Set x_size" << endl << "2) Set y_size" << endl << "3) Get x_size" << endl << "4) Get y_size" << endl << "5) Calculate area" << endl << "6) Show area" << endl << "7) exit" << endl;
		cin >> c;
		switch (c)
		{
		case (1):
		{
			rectangle.set_x_size();
			break;
		}
		case (2):
		{
			rectangle.set_y_size();
			break;
		}
		case (3):
		{
			rectangle.show_x_size();
			break;
		}
		case (4):
		{
			rectangle.show_y_size();
			break;
		}
		case (5):
		{
			rectangle.AreaCalculate();
			break;
		}
		case (6):
		{
			rectangle.ShowArea();
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
			break;
		}
		}
	}
	cout << "Finished" << endl;

	return 0;
}