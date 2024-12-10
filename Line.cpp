#include <iostream>
#include "Line.h"

Line::Line(int _x1, int _y1, int _x2, int _y2)
{
	setType(TypeShape::Line);
	x1 = _x1; y1 = _y1;
	x2 = _x2; y2 = _y2;
}

void Line::shift(int x, int y)
{
	x1 += x; y1 += y;
	x2 += x; y2 += y;
}

void Line::scaleX(int x)
{
	x1 *= x;
	x2 *= x;
}

void Line::scaleY(int y)
{
	y1 *= y;
	y2 *= y;
}

void Line::scale(int scale)
{
	x1 /= scale; y1 /= scale;
	x2 /= scale; y2 /= scale;
}
