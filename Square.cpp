#include "Square.h"

Square::Square(int _x1, int _y1, int _x2, int _y2, int _x3, int _y3, int _x4, int _y4)
{
	setType(TypeShape::Sqr);
	x3 = _x3; y3 = _y3;
	x4 = _x4; y4 = _y4;

	side_a = abs(x1 - x2);
	side_b = abs(y1 - y2);

	Area();

}

void Square::shift(int x, int y)
{
	x1 += x; y1 += y;
	x2 += x; y2 += y;
	x3 += x; y3 += y;
	x4 += x; y4 += y;
}

void Square::scaleX(int x)
{
	x1 *= x;
	x2 *= x;
	x3 *= x;
	x4 *= x;
}

void Square::scaleY(int y)
{
	y1 *= y;
	y2 *= y;
	y3 *= y;
	y4 *= y;
}

void Square::scale(int scale)
{
	x1 /= scale; y1 /= scale;
	x2 /= scale; y2 /= scale;
	x3 /= scale; y3 /= scale;
	x4 /= scale; y4 /= scale;
}
