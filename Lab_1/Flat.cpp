#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Flat.h"

using namespace std;

Flat::Flat()
{
	x_size = 0;
	y_size = 0;
	area = 0;
}

void Flat::AreaCalculate()
{
	if (x_size == 0)
		cout << "No x" << endl;
	else if (y_size == 0)
		cout << "no y" << endl;
	else
	{
		area = x_size * y_size;
		cout << "Calculated" << endl;
	}
	system("pause");
}

void Flat::ShowArea()
{
	cout << "Area: " << area << endl;
	system("pause");
}

void Flat::set_x_size()
{
	cout << "Enter x" << endl;
	cin >> x_size;
}

void Flat::set_y_size()
{
	cout << "Enter y" << endl;
	cin >> y_size;
}

float Flat::get_x_size()
{
	return x_size;
}

float Flat::get_y_size()
{
	return y_size;
}

void Flat::show_x_size()
{
	cout << "x_size: " << x_size << endl;
	system("pause");
}

void Flat::show_y_size()
{
	cout << "y_size: " << y_size << endl;
	system("pause");
}