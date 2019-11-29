#include <iostream>
#include "Flat.h"

Rhombus::Rhombus()
{
	name = 0;
	ploshad = 0;
	first_diag = 0;
	second_diag = 0;
	picture = 0;
	cout << "Rhombus constructor" << endl;
}

Rhombus::~Rhombus()
{
	name = 0;
	ploshad = 0;
	first_diag = 0;
	second_diag = 0;
	picture = 0;
	cout << "Rhombus destructor" << endl;
}

void Rhombus::set_name(int name_number)
{
	name = name_number;
}

void Rhombus::set_ploshad()
{
	ploshad = (first_diag * second_diag) / 2;
}

void Rhombus::set_first_diag(float first_size)
{
	first_diag = first_size;
}

void Rhombus::set_second_diag(float second_size)
{
	second_diag = second_size;
}

void Rhombus::set_picture()
{
	picture = name;
}

int Rhombus::get_name()
{
	return name;
}

float Rhombus::get_ploshad()
{
	return ploshad;
}

float Rhombus::get_first_diag()
{
	return first_diag;
}

float Rhombus::get_second_diag()
{
	return second_diag;
}

int Rhombus::get_picture()
{
	return picture;
}

void Rhombus::show()
{
	cout << "Name: Circle" << endl;
	cout << "Area: " << ploshad << endl;
	cout << "First diag: " << first_diag << endl;
	cout << "Second diag: " << second_diag << endl;
	cout << "Picture:" << endl;
	cout << "  /\\" << endl;
	cout << " /  \\" << endl;
	cout << " \\  /" << endl;
	cout << "  \\/" << endl;
}

void Rhombus::show_size()
{
	cout << "1) First diag: " << first_diag << endl;
	cout << "2) Second diag: " << second_diag << endl;
	cout << "3) Exit" << endl;
}

int Rhombus::size_change(int parameter)
{
	switch (parameter)
	{
	case '1':
	{
		float new_width;
		cout << "Enter new first" << endl;
		cin >> new_width;
		set_first_diag(new_width);
		set_ploshad();
		return 0;
		break;
	}
	case '2':
	{
		float new_width;
		cout << "Enter new second" << endl;
		cin >> new_width;
		set_second_diag(new_width);
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