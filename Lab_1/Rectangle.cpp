#include <iostream>
#include "Flat.h"

Rectangle::Rectangle()
{
	name = 0;
	ploshad = 0;
	width = 0;
	height = 0;
	picture = 0;
	cout << "Rectandle constructor" << endl;
}

Rectangle::~Rectangle()
{
	name = 0;
	ploshad = 0;
	width = 0;
	height = 0;
	picture = 0;
	cout << "Rectandle destructor" << endl;
}

void Rectangle::set_name(int name_number)
{
	name = name_number;
}

void Rectangle::set_ploshad()
{
	ploshad = width * height;
}

void Rectangle::set_width(float width_size)
{
	width = width_size;
}

void Rectangle::set_height(float height_size)
{
	height = height_size;
}

void Rectangle::set_picture()
{
	picture = name;
}

int Rectangle::get_name()
{
	return name;
}

float Rectangle::get_ploshad()
{
	return ploshad;
}

float Rectangle::get_width()
{
	return width;
}

float Rectangle::get_height()
{
	return height;
}

int Rectangle::get_picture()
{
	return picture;
}

void Rectangle::show()
{
	cout << "Name: Rectangle" << endl;
	cout << "Area: " << ploshad << endl;
	cout << "Wdth: " << width << endl;
	cout << "Height: " << height << endl;
	cout << "Picture:" << endl;
	cout << "--------" << endl;
	cout << "|      |" << endl;
	cout << "--------" << endl;
}

void Rectangle::show_size()
{
	cout << "1) Wdth: " << width << endl;
	cout << "2) Height: " << height << endl;
	cout << "3) Exit" << endl;
}

int Rectangle::size_change(int parameter)
{
	switch (parameter)
	{
	case '1':
	{
		float new_width;
		cout << "Enter new width" << endl;
		cin >> new_width;
		set_width(new_width);
		set_ploshad();
		return 0;
		break;
	}
	case '2':
	{
		float new_height;
		cout << "Enter new height" << endl;
		cin >> new_height;
		set_height(new_height);
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