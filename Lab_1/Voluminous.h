#include <iostream>
#include "Figures.h"

using namespace std;

class Voluminous : public Figure
{

};

class Sphere : public Voluminous
{
	int name;
	float ploshad;
	float radius;
	int picture;
public:
	Sphere();
	Sphere(int);
	Sphere(Sphere&);
	~Sphere();
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

class Pyramid : public Voluminous
{
	int name;
	float ploshad;
	float base;
	float height;
	int picture;
public:
	Pyramid();
	Pyramid(int);
	Pyramid(Pyramid&);
	~Pyramid();
	void set_name(int);
	void set_ploshad();
	void set_base(float);
	void set_height(float);
	void set_picture();
	int get_name();
	float get_ploshad();
	float get_base();
	float get_height();
	int get_picture();
	void show();
	void show_size();
	int size_change(int);
};

class Cylinder : public Voluminous
{
	int name;
	float ploshad;
	float base;
	float height;
	int picture;
public:
	Cylinder();
	Cylinder(int);
	Cylinder(Cylinder&);
	~Cylinder();
	void set_name(int);
	void set_ploshad();
	void set_base(float);
	void set_height(float);
	void set_picture();
	int get_name();
	float get_ploshad();
	float get_base();
	float get_height();
	int get_picture();
	void show();
	void show_size();
	int size_change(int);
};

class Kube : public Voluminous
{
	int name;
	float ploshad;
	float side;
	int picture;
public:
	Kube();
	Kube(int);
	Kube(Kube&);
	~Kube();
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

class Cone : public Voluminous
{
	int name;
	float ploshad;
	float base;
	float height;
	int picture;
public:
	Cone();
	Cone(int);
	Cone(Cone&);
	~Cone();
	void set_name(int);
	void set_ploshad();
	void set_base(float);
	void set_height(float);
	void set_picture();
	int get_name();
	float get_ploshad();
	float get_base();
	float get_height();
	int get_picture();
	void show();
	void show_size();
	int size_change(int);
};

#pragma once