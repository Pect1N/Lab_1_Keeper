#include <iostream>
#include "Voluminous.h"

using namespace std;

Pyramid::Pyramid()
{
	name = 0;
	ploshad = 0;
	base = 0;
	height = 0;
	picture = 0;
	cout << "Pyramid constructor with param" << endl;
}

Pyramid::Pyramid(int i)
{
	name = i;
	ploshad = 0;
	base = 0;
	height = 0;
	picture = 0;
	cout << "Pyramid constructor" << endl;
}

Pyramid::Pyramid(Pyramid& old)
{
	name = old.get_name();
	ploshad = old.get_ploshad();
	base = old.get_base();
	height = old.get_height();
	picture = old.get_picture();
	cout << "Pyramid copy constructor" << endl;
}

Pyramid::~Pyramid()
{
	name = 0;
	ploshad = 0;
	base = 0;
	height = 0;
	picture = 0;
	cout << "Pyramid destructor" << endl;
}

void Pyramid::set_name(int name_number)
{
	name = name_number;
}

void Pyramid::set_ploshad()
{
	ploshad = (float)((base * height) / 3);
}

void Pyramid::set_base(float base_size)
{
	base = base_size;
}

void Pyramid::set_height(float height_size)
{
	height = height_size;
}

void Pyramid::set_picture()
{
	picture = name;
}

int Pyramid::get_name()
{
	return name;
}

float Pyramid::get_ploshad()
{
	return ploshad;
}

float Pyramid::get_base()
{
	return base;
}

float Pyramid::get_height()
{
	return height;
}

int Pyramid::get_picture()
{
	return picture;
}

void Pyramid::show()
{
	cout << "Name: Pyramid" << endl;
	cout << "Volume: " << ploshad << endl;
	cout << "Base: " << base << endl;
	cout << "Height: " << height << endl;
	cout << "Picture:" << endl;
	cout << "  /|\\" << endl;
	cout << " / | \\" << endl;
	cout << "/  | /" << endl;
	cout << "----/" << endl;
}

void Pyramid::show_size()
{
	cout << "1) Base: " << base << endl;
	cout << "2) Height: " << height << endl;
	cout << "3) Exit" << endl;
}

int Pyramid::size_change(int parameter)
{
	switch (parameter)
	{
	case '1':
	{
		float new_width;
		cout << "Enter new base" << endl;
		cin >> new_width;
		set_base(new_width);
		set_ploshad();
		return 0;
		break;
	}
	case '2':
	{
		float new_width;
		cout << "Enter new height" << endl;
		cin >> new_width;
		set_height(new_width);
		set_ploshad();
		return 0;
		break;
	}
	case '3':
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