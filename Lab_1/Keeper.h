#include "Figures.h"

class Keeper
{
	Keeper* next;
	Keeper* prev;
	Figure* obj;
public:
	Keeper();
	~Keeper();
	void set_next(Keeper* );
	void set_prev(Keeper* );
	void set_obj(Figure* );
	Keeper* get_next();
	Keeper* get_prev();
	Figure* get_obj();
};

#pragma once