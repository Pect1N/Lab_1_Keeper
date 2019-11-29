#include <iostream>
#include "Figures.h"

using namespace std;

class Flat : public Figure
{

};

class Circle : public Flat
{
	int name;
	float ploshad;
	float radius;
	int picture;
public:
	Circle();
	~Circle();
	void set_name(int);
	void set_ploshad();
	void set_radius(float);
	void set_picture();
	int get_name();
	float get_ploshad();
	float get_radius();
	int get_picture();
	void show();
	void show_size();
	int size_change(int);
};

class Triangle : public Flat
{
	int name;
	float ploshad;
	float base;
	float left;
	float right;
	int picture;
public:
	Triangle();
	~Triangle();
	void set_name(int);
	void set_ploshad();
	void set_base(float);
	void set_left(float);
	void set_right(float);
	void set_picture();
	int get_name();
	float get_ploshad();
	float get_base();
	float get_left();
	float get_right();
	int get_picture();
	void show();
	void show_size();
	int size_change(int);
};

class Sqare : public Flat
{
	int name;
	float ploshad;
	float side;
	int picture;
public:
	Sqare();
	~Sqare();
	void set_name(int);
	void set_ploshad();
	void set_side(float);
	void set_picture();
	int get_name();
	float get_ploshad();
	float get_side();
	int get_picture();
	void show();
	void show_size();
	int size_change(int);
};

class Trapezioid : public Flat
{
	int name;
	float ploshad;
	float top;
	float base;
	float left;
	float right;
	int picture;
public:
	Trapezioid();
	~Trapezioid();
	void set_name(int);
	void set_ploshad();
	void set_top(float);
	void set_base(float);
	void set_left(float);
	void set_right(float);
	void set_picture();
	int get_name();
	float get_ploshad();
	float get_top();
	float get_base();
	float get_left();
	float get_right();
	int get_picture();
	void show();
	void show_size();
	int size_change(int);
};

class Rhombus : public Flat
{
	int name;
	float ploshad;
	float first_diag;
	float second_diag;
	int picture;
public:
	Rhombus();
	~Rhombus();
	void set_name(int);
	void set_ploshad();
	void set_first_diag(float);
	void set_second_diag(float);
	void set_picture();
	int get_name();
	float get_ploshad();
	float get_first_diag();
	float get_second_diag();
	int get_picture();
	void show();
	void show_size();
	int size_change(int);
};

class Rectangle : public Flat
{
	int name;
	float ploshad;
	float width;
	float height;
	int picture;
public:
	Rectangle();
	~Rectangle();
	void set_name(int);
	void set_ploshad();
	void set_width(float);
	void set_height(float);
	void set_picture();
	int get_name();
	float get_ploshad();
	float get_width();
	float get_height();
	int get_picture();
	void show();
	void show_size();
	int size_change(int);
};

#pragma once