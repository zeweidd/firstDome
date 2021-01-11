#pragma once
#include "Team.h"
class School
{
	Team classA;
	Team classB;
	Team classC;
	void manage_class(Team&);
public:
	School() :classA("A°à"), classB("B°à"), classC("C°à") {}


	void information();
	void manage();
};



