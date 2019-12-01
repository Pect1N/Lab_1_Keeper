#include <iostream>
#include "Voluminous.h"

using namespace std;

Cone::Cone()
{
	name = 0;
	ploshad = 0;
	base = 0;
	height = 0;
	picture = 0;
	cout << "Cone constructor" << endl;
}

Cone::Cone(int i)
{
	name = i;
	ploshad = 0;
	base = 0;
	height = 0;
	picture = 0;
	cout << "Cone constructor with param" << endl;
}

Cone::Cone(Cone& old)
{
	name = old.get_name();
	ploshad = old.get_ploshad();
	base = old.get_base();
	height = old.get_height();
	picture = old.get_picture();
	cout << "Cone copy constructor" << endl;
}

Cone::~Cone()
{
	name = 0;
	ploshad = 0;
	base = 0;
	height = 0;
	picture = 0;
	cout << "Cone destructor" << endl;
}

void Cone::set_name(int name_number)
{
	name = name_number;
}

void Cone::set_ploshad()
{
	ploshad = (float)((base * height) / 3);
}

void Cone::set_base(float base_size)
{
	base = base_size;
}

void Cone::set_height(float height_size)
{
	height = height_size;
}

void Cone::set_picture()
{
	picture = name;
}

int Cone::get_name()
{
	return name;
}

float Cone::get_ploshad()
{
	return ploshad;
}

float Cone::get_base()
{
	return base;
}

float Cone::get_height()
{
	return height;
}

int Cone::get_picture()
{
	return picture;
}

void Cone::show()
{
	cout << "Name: Cone" << endl;
	cout << "Volume: " << ploshad << endl;
	cout << "Base: " << base << endl;
	cout << "Height: " << height << endl;
	cout << "Picture:" << endl;
	cout << "   /|\\" << endl;
	cout << "  / | \\" << endl;
	cout << " /  |  \\" << endl;
	cout << "(___|___)" << endl;
}

void Cone::show_size()
{
	cout << "1) Base: " << base << endl;
	cout << "2) Height: " << height << endl;
	cout << "3) Exit" << endl;
}

int Cone::size_change(int parameter)
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