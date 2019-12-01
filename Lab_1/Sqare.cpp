#include <iostream>
#include "Flat.h"

Sqare::Sqare()
{
	name = 0;
	ploshad = 0;
	side = 0;
	picture = 0;
	cout << "Sqare constructor" << endl;
}

Sqare::Sqare(int i)
{
	name = i;
	ploshad = 0;
	side = 0;
	picture = 0;
	cout << "Sqare constructor with param" << endl;
}

Sqare::Sqare(Sqare& old)
{
	name = old.get_name();
	ploshad = old.get_ploshad();
	side = old.get_side();
	picture = old.get_picture();
	cout << "Sqare copy constructor" << endl;
}

Sqare::~Sqare()
{
	name = 0;
	ploshad = 0;
	side = 0;
	picture = 0;
	cout << "Sqare destructor" << endl;
}

void Sqare::set_name(int name_number)
{
	name = name_number;
}

void Sqare::set_ploshad()
{
	ploshad = side * side;
}

void Sqare::set_side(float side_size)
{
	side = side_size;
}

void Sqare::set_picture()
{
	picture = name;
}

int Sqare::get_name()
{
	return name;
}

float Sqare::get_ploshad()
{
	return ploshad;
}

float Sqare::get_side()
{
	return side;
}

int Sqare::get_picture()
{
	return picture;
}

void Sqare::show()
{
	cout << "Name: Sqare" << endl;
	cout << "Area: " << ploshad << endl;
	cout << "Side: " << side << endl;
	cout << "Picture:" << endl;
	cout << "-----" << endl;
	cout << "|   |" << endl;
	cout << "-----" << endl;
}

void Sqare::show_size()
{
	cout << "1) Side: " << side << endl;
	cout << "2) Exit" << endl;
}

int Sqare::size_change(int parameter)
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