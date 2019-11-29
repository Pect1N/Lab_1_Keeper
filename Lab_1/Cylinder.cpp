#include <iostream>
#include "Voluminous.h"

using namespace std;

Cylinder::Cylinder()
{
	name = 0;
	ploshad = 0;
	base = 0;
	height = 0;
	picture = 0;
	cout << "Cylinder constructor" << endl;
}

Cylinder::~Cylinder()
{
	name = 0;
	ploshad = 0;
	base = 0;
	height = 0;
	picture = 0;
	cout << "Cylinder destructor" << endl;
}

void Cylinder::set_name(int name_number)
{
	name = name_number;
}

void Cylinder::set_ploshad()
{
	ploshad = (float)(base * height);
}

void Cylinder::set_base(float base_size)
{
	base = base_size;
}

void Cylinder::set_height(float height_size)
{
	height = height_size;
}

void Cylinder::set_picture()
{
	picture = name;
}

int Cylinder::get_name()
{
	return name;
}

float Cylinder::get_ploshad()
{
	return ploshad;
}

float Cylinder::get_base()
{
	return base;
}

float Cylinder::get_height()
{
	return height;
}

int Cylinder::get_picture()
{
	return picture;
}

void Cylinder::show()
{
	cout << "Name: Cylinder" << endl;
	cout << "Volume: " << ploshad << endl;
	cout << "Base: " << base << endl;
	cout << "Height: " << height << endl;
	cout << "Picture:" << endl;
	cout << " __  " << endl;
	cout << "(__) " << endl;
	cout << "|  |" << endl;
	cout << "(__) " << endl;
}

void Cylinder::show_size()
{
	cout << "1) Base: " << base << endl;
	cout << "2) Height: " << height << endl;
	cout << "3) Exit" << endl;
}

int Cylinder::size_change(int parameter)
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