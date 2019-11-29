#include <iostream>
#include "Functions.h"

void show_menu(int counter)
{
	switch (counter)
	{
	case 1:
	{
		cout << "What should we do?" << endl;
		cout << "1) Create" << endl;
		cout << "2) Edit" << endl;
		cout << "3) Delete" << endl;
		cout << "4) Save" << endl;
		cout << "5) Load" << endl;
		cout << "6) Show" << endl;
		cout << "7) Exit" << endl;
		break;
	}
	case 2:
	{
		cout << "1) Flat figure" << endl;
		cout << "2) Voluminous figure" << endl;
		cout << "3) Exit" << endl;
		break;
	}
	case 3:
	{
		cout << "What figure should be created?" << endl;
		cout << "1) Circle" << endl;
		cout << "2) Triangle" << endl;
		cout << "3) Sqare" << endl;
		cout << "4) Trapezoid" << endl;
		cout << "5) Rhombus" << endl;
		cout << "6) Rectangle" << endl;
		cout << "7) Exit" << endl;
		break;
	}
	case 4:
	{
		cout << "What figure should be created?" << endl;
		cout << "1) Sphere" << endl;
		cout << "2) Pyramid" << endl;
		cout << "3) Cylinder" << endl;
		cout << "4) Kube" << endl;
		cout << "5) Cone" << endl;
		cout << "6) Exit" << endl;
		break;
	}
	default:
	{
		cout << "Wrong enter" << endl;
		system("pause");
		break;
	}
	}
}