#include <iostream>
#include "Figures.h"

using namespace std;

class Flat : public Figure
{

};

class Rectangle : public Flat
{
	int name;
	int ploshad;
	int width;
	int height;
	int picture;
public:
	void A(){}
	Rectangle();
	~Rectangle();
	void set_name(int);
	void set_ploshad();
	void set_width(int);
	void set_height(int);
	void set_picture();
	int get_name();
	int get_ploshad();
	int get_width();
	int get_height();
	int get_picture();
	void show();
};

#pragma once