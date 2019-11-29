#include <iostream>
#include "Voluminous.h"

using namespace std;

Sphere::Sphere()
{
	name = 0;
	ploshad = 0;
	radius = 0;
	picture = 0;
	cout << "Sphere constructor" << endl;
}

Sphere::~Sphere()
{
	name = 0;
	ploshad = 0;
	radius = 0;
	picture = 0;
	cout << "Sphere destructor" << endl;
}

void Sphere::set_name(int name_number)
{
	name = name_number;
}

void Sphere::set_ploshad()
{
	ploshad = (float)((4 / 3) * 3.14 * radius * radius * radius);
}

void Sphere::set_radius(float radius_size)
{
	radius = radius_size;
}

void Sphere::set_picture()
{
	picture = name;
}

int Sphere::get_name()
{
	return name;
}

float Sphere::get_ploshad()
{
	return ploshad;
}

float Sphere::get_radius()
{
	return radius;
}

int Sphere::get_picture()
{
	return picture;
}

void Sphere::show()
{
	cout << "Name: Sphere" << endl;
	cout << "Volume: " << ploshad << endl;
	cout << "Side: " << radius << endl;
	cout << "Picture:" << endl;
	cout << "  ----- " << endl;
	cout << " /  /  \\ " << endl;
	cout << "|--|----|" << endl;
	cout << " \\  \\  /" << endl;
	cout << "  ----- " << endl;
}

void Sphere::show_size()
{
	cout << "1) Radius: " << radius << endl;
	cout << "2) Exit" << endl;
}

int Sphere::size_change(int parameter)
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