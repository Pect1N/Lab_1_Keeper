#include <iostream>

using namespace std;

class Figure
{
public:
	virtual void A();
	virtual void set_name(int);
	virtual void set_ploshad();
	virtual void set_width(int);
	virtual void set_height(int);
	virtual void set_picture();
	virtual int get_name();
	virtual int get_ploshad();
	virtual int get_width();
	virtual int get_height();
	virtual int get_picture();
	virtual void show();
};

#pragma once