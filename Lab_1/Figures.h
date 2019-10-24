#pragma once
#include <stdio.h>
#include "Flat.h"
#include "Voluminous.h"

class Figures
{
	Flat* fstart;
	Voluminous* vstart;
public:
	void set_fstart();
	void set_vstart();
};