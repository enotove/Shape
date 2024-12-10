#pragma once
#include "Line.h"

class Circle : public Line
{
public:
	Circle(int _x1, int _y1, double R, double H) : Line(_x1, _y1, 0, 0);
};