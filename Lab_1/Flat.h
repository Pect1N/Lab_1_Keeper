#pragma once
#include <stdio.h>

class Flat
{
	float x_size;
	float y_size;
	float area;
public:
	Flat();
	void AreaCalculate();
	void ShowArea();
	void set_x_size();
	void set_y_size();
	float get_x_size();
	float get_y_size();
	void show_x_size();
	void show_y_size();
};