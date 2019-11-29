#include <iostream>
#include "Flat.h"

using namespace std;

Circle::Circle()
{
	name = 0;
	ploshad = 0;
	radius = 0;
	picture = 0;
	cout << "Circle constructor" << endl;
}

Circle::~Circle()
{
	name = 0;
	ploshad = 0;
	radius = 0;
	picture = 0;
	cout << "Circle destructor" << endl;
}

void Circle::set_name(int name_number)
{
	name = name_number;
}

void Circle::set_ploshad()
{
	ploshad = (float)(3.14 * radius * radius);
}

void Circle::set_radius(float radius_size)
{
	radius = radius_size;
}

void Circle::set_picture()
{
	picture = name;
}

int Circle::get_name()
{
	return name;
}

float Circle::get_ploshad()
{
	return ploshad;
}

float Circle::get_radius()
{
	return radius;
}

int Circle::get_picture()
{
	return picture;
}

void Circle::show()
{
	cout << "Name: Circle" << endl;
	cout << "Area: " << ploshad << endl;
	cout << "Side: " << radius << endl;
	cout << "Picture:" << endl;
	cout << "  ----- " << endl;
	cout << " /     \\ " << endl;
	cout << "|       |" << endl;
	cout << " \\     /" << endl;
	cout << "  ----- " << endl;
}

void Circle::show_size()
{
	cout << "1) Radius: " << radius << endl;
	cout << "2) Exit" << endl;
}

int Circle::size_change(int parameter)
{
	switch (parameter)
	{
	case '1':
	{
		float new_width;
		cout << "Enter new radius" << endl;
		cin >> new_width;
		set_radius(new_width);
		set_ploshad();
		return 0;
		break;
	}
	case '2':
	{
		return 1;
		break;
	}
	default:
	{
		cout << "Wrong number" << endl;
		system("pause");
		return 0;
		break;
	}
	}
}