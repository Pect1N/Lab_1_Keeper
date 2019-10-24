#pragma once
#include <stdio.h>

class Flat
{
	Flat* next;
	Flat* previous;
public:
	Flat();
	~Flat();
	void set_next();
	void set_previous();
	Flat* get_next();
	Flat* get_previous();
};

class Rectangle : Flat
{

public:
	Rectangle();
	~Rectangle();
};