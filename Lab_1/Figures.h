#include <iostream>

using namespace std;

class Figure
{
public:
	virtual void set_name(int);
	virtual void set_ploshad();
	virtual void set_width(float);
	virtual void set_height(float);
	virtual void set_picture();
	virtual int get_name();
	virtual float get_ploshad();
	virtual float get_width();
	virtual float get_height();
	virtual int get_picture();
	virtual void show();
	virtual void show_size();
	virtual int size_change(int);

	virtual void set_side(float);
	virtual float get_side();

	virtual void set_radius(float);
	virtual float get_radius();

	virtual void set_base(float);
	virtual void set_left(float);
	virtual void set_right(float);
	virtual float get_base();
	virtual float get_left();
	virtual float get_right();

	virtual void set_top(float);
	virtual float get_top();

	virtual void set_first_diag(float);
	virtual void set_second_diag(float);
	virtual float get_first_diag();
	virtual float get_second_diag();

};

#pragma once