#pragma once
#include "Team.h"
class School
{
	Team classA;
	Team classB;
	Team classC;
	void manage_class(Team&);
public:
	School() :classA("A��"), classB("B��"), classC("C��") {}


	void information();
	void manage();
};



