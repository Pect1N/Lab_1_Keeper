#include <iostream>
#include "Flat.h"

Trapezioid::Trapezioid()
{
	name = 0;
	ploshad = 0;
	top = 0;
	base = 0;
	left = 0;
	right = 0;
	picture = 0;
	cout << "Trapezioid constructor" << endl;
}

Trapezioid::Trapezioid(int i)
{
	name = i;
	ploshad = 0;
	top = 0;
	base = 0;
	left = 0;
	right = 0;
	picture = 0;
	cout << "Trapezioid constructor with param" << endl;
}

Trapezioid::Trapezioid(Trapezioid& old)
{
	name = old.get_name();
	ploshad = old.get_ploshad();
	top = old.get_top();
	base = old.get_base();
	left = old.get_left();
	right = old.get_right();
	picture = old.get_picture();
	cout << "Trapezioid copy constructor" << endl;
}

Trapezioid::~Trapezioid()
{
	name = 0;
	ploshad = 0;
	top = 0;
	base = 0;
	left = 0;
	right = 0;
	picture = 0;
	cout << "Trapezioid destructor" << endl;
}

void Trapezioid::set_name(int name_number)
{
	name = name_number;
}

void Trapezioid::set_ploshad()
{
	float d_left = left * left, d_right = right * right, d_top = top * top, b_t = base - top, t_b = top + base;
	ploshad = (float)(((t_b) / 2) * sqrt(d_left - ((d_top - d_right + b_t * b_t) / (2 * b_t))));
}

void Trapezioid::set_top(float top_size)
{
	top = top_size;
}

void Trapezioid::set_base(float base_size)
{
	base = base_size;
}

void Trapezioid::set_left(float left_size)
{
	left = left_size;
}

void Trapezioid::set_right(float right_size)
{
	right = right_size;
}

void Trapezioid::set_picture()
{
	picture = name;
}

int Trapezioid::get_name()
{
	return name;
}

float Trapezioid::get_ploshad()
{
	return ploshad;
}

float Trapezioid::get_top()
{
	return top;
}

float Trapezioid::get_base()
{
	return base;
}

float Trapezioid::get_left()
{
	return left;
}

float Trapezioid::get_right()
{
	return right;
}

int Trapezioid::get_picture()
{
	return picture;
}

void Trapezioid::show()
{
	cout << "Name: Circle" << endl;
	cout << "Area: " << ploshad << endl;
	cout << "Top: " << top << endl;
	cout << "Base: " << base << endl;
	cout << "Left: " << left << endl;
	cout << "Right: " << right << endl;
	cout << "Picture:" << endl;
	cout << "   ______" << endl;
	cout << "  /      \\" << endl;
	cout << " /        \\" << endl;
	cout << "/          \\" << endl;
	cout << "------------" << endl;
}

void Trapezioid::show_size()
{
	cout << "1) Top: " << top << endl;
	cout << "2) Base: " << base << endl;
	cout << "3) Left: " << left << endl;
	cout << "4) Right: " << right << endl;
	cout << "5) Exit" << endl;
}

int Trapezioid::size_change(int parameter)
{
	switch (parameter)
	{
	case '1':
	{
		float new_width;
		cout << "Enter new top" << endl;
		cin >> new_width;
		set_top(new_width);
		set_ploshad();
		return 0;
		break;
	}
	case '2':
	{
		float new_width;
		cout << "Enter new base" << endl;
		cin >> new_width;
		set_base(new_width);
		set_ploshad();
		return 0;
		break;
	}
	case '3':
	{
		float new_width;
		cout << "Enter new left" << endl;
		cin >> new_width;
		set_left(new_width);
		set_ploshad();
		return 0;
		break;
	}
	case '4':
	{
		float new_width;
		cout << "Enter new right" << endl;
		cin >> new_width;
		set_right(new_width);
		set_ploshad();
		return 0;
		break;
	}
	case '5':
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