#include <iostream>
#include "Voluminous.h"

Kube::Kube()
{
	name = 0;
	ploshad = 0;
	side = 0;
	picture = 0;
	cout << "Kube constructor" << endl;
}

Kube::~Kube()
{
	name = 0;
	ploshad = 0;
	side = 0;
	picture = 0;
	cout << "Kube destructor" << endl;
}

void Kube::set_name(int name_number)
{
	name = name_number;
}

void Kube::set_ploshad()
{
	ploshad = side * side * side;
}

void Kube::set_side(float side_size)
{
	side = side_size;
}

void Kube::set_picture()
{
	picture = name;
}

int Kube::get_name()
{
	return name;
}

float Kube::get_ploshad()
{
	return ploshad;
}

float Kube::get_side()
{
	return side;
}

int Kube::get_picture()
{
	return picture;
}

void Kube::show()
{
	cout << "Name: Kube" << endl;
	cout << "Area: " << ploshad << endl;
	cout << "Side: " << side << endl;
	cout << "Picture:" << endl;
	cout << " _____" << endl;
	cout << "/____/|" << endl;
	cout << "|    ||" << endl;
	cout << "|____|/" << endl;
}

void Kube::show_size()
{
	cout << "1) Side: " << side << endl;
	cout << "2) Exit" << endl;
}

int Kube::size_change(int parameter)
{
	switch (parameter)
	{
	case '1':
	{
		float new_width;
		cout << "Enter new side" << endl;
		cin >> new_width;
		set_side(new_width);
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