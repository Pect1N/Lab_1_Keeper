#include <iostream>
#include "Flat.h"

Triangle::Triangle()
{
	name = 0;
	ploshad = 0;
	base = 0;
	left = 0;
	right = 0;
	picture = 0;
	cout << "Triangle constructor" << endl;
}

Triangle::Triangle(int i)
{
	name = i;
	ploshad = 0;
	base = 0;
	left = 0;
	right = 0;
	picture = 0;
	cout << "Triangle constructor with param" << endl;
}

Triangle::Triangle(Triangle& old)
{
	name = old.get_name();
	ploshad = old.get_ploshad();
	base = old.get_base();
	left = old.get_left();
	right = old.get_right();
	picture = old.get_picture();
	cout << "Triangle copy constructor" << endl;
}

Triangle::~Triangle()
{
	name = 0;
	ploshad = 0;
	base = 0;
	left = 0;
	right = 0;
	picture = 0;
	cout << "Triangle destructor" << endl;
}

void Triangle::set_name(int name_number)
{
	name = name_number;
}

void Triangle::set_ploshad()
{
	float p = (base + left + right) / 2; // полупериметр
	ploshad = (float)sqrt(p * (p - base) * (p - left) * (p - right));
}

void Triangle::set_base(float base_size)
{
	base = base_size;
}

void Triangle::set_left(float left_size)
{
	left = left_size;
}

void Triangle::set_right(float right_size)
{
	right = right_size;
}

void Triangle::set_picture()
{
	picture = name;
}

int Triangle::get_name()
{
	return name;
}

float Triangle::get_ploshad()
{
	return ploshad;
}

float Triangle::get_base()
{
	return base;
}

float Triangle::get_left()
{
	return left;
}

float Triangle::get_right()
{
	return right;
}

int Triangle::get_picture()
{
	return picture;
}

void Triangle::show()
{
	cout << "Name: Triangle" << endl;
	cout << "Area: " << ploshad << endl;
	cout << "Base: " << base << endl;
	cout << "Left: " << left << endl;
	cout << "Right: " << right << endl;
	cout << "Picture:" << endl;
	cout << "  /\\" << endl;
	cout << " /  \\" << endl;
	cout << "/    \\" << endl;
	cout << "------" << endl;
}

void Triangle::show_size()
{
	cout << "1) Base: " << base << endl;
	cout << "2) Left: " << left << endl;
	cout << "3) Right: " << right << endl;
	cout << "4) Exit" << endl;
}

int Triangle::size_change(int parameter)
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
		cout << "Enter new left" << endl;
		cin >> new_width;
		set_left(new_width);
		set_ploshad();
		return 0;
		break;
	}
	case '3':
	{
		float new_width;
		cout << "Enter new right" << endl;
		cin >> new_width;
		set_right(new_width);
		set_ploshad();
		return 0;
		break;
	}
	case '4':
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