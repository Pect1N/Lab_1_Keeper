#include "Keeper.h"
#include <iostream>

using namespace std;

Keeper :: Keeper()
{
	next = 0;
	prev = 0;
	obj = 0;
	cout << "Keeper created" << endl;
}

Keeper :: ~Keeper()
{
	next = 0;
	prev = 0;
	obj = 0;
	cout << "Keeper deleted" << endl;
}

void Keeper :: set_next(Keeper* next_keeper)
{
	next = next_keeper;
}

void Keeper :: set_prev(Keeper* prev_keeper)
{
	prev = prev_keeper;
}

void Keeper :: set_obj(Figure* obj_keeper)
{
	obj = obj_keeper;
}

Keeper* Keeper :: get_next()
{
	return next;
}

Keeper* Keeper :: get_prev()
{
	return prev;
}

Figure* Keeper :: get_obj()
{
	return obj;
}