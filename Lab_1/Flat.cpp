#include <iostream>
#include "Flat.h"

using namespace std;

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

void Rectangle::set_width(int width_size)
{
	width = width_size;
}

void Rectangle::set_height(int height_size)
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

int Rectangle::get_ploshad()
{
	return ploshad;
}

int Rectangle::get_width()
{
	return width;
}

int Rectangle::get_height()
{
	return height;
}

int Rectangle::get_picture()
{
	return picture;
}

void Rectangle::show()
{
	if (name == 1)
	{
		cout << "Rectangle" << endl;
	}
}