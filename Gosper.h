
#pragma once

#include "Turtle.h"
#include <iostream>
#include <fstream>
#include <math.h>

class Gosper : public Turtle
{
public:
	Gosper(float, float, float);
	~Gosper();

	void leftCurve(int depth, int length);
	void rightCurve(int depth, int length);
};

