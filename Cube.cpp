#include "Cube.h"

Cube::Cube(int _x1, int _y1, int _z1, int _x2, int _y2, int _z2, int _x3, int _y3, int _z3, int _x4, int _y4, int _z4, int _x5, int _y5, int _z5, int _x6, int _y6, int _z6, int _x7, int _y7, int _z7, int _x8, int _y8, int _z8)
{
	setType(TypeShape::Cube);
	z1 = _z1; z2 = _z2;
	x3 = _x3; y3 = _y3; z3 = _z3;
	x4 = _x4; y4 = _y4; z4 = _z4;
	x5 = _x5; y5 = _y5; z5 = _z5;
	x6 = _x6; y6 = _y6; z6 = _z6;
	x7 = _x7; y7 = _y7; z7 = _z7;
	x8 = _x8; y8 = _y8; z8 = _z8;


	side_a = abs(x1 - x2);
	side_b = abs(y1 - y2);
	side_c = abs(z1 - z2);
	
	Area();

	Volume();
}

void Cube::shift(int x, int y, int z)
{
	x1 += x; y1 += y; z1 += z;
	x2 += x; y2 += y; z2 += z;
	x3 += x; y3 += y; z3 += z;
	x4 += x; y4 += y; z4 += z;
	x5 += x; y5 += y; z5 += z;
	x6 += x; y6 += y; z6 += z;
	x7 += x; y7 += y; z7 += z;
	x8 += x; y8 += y; z8 += z;
}

void Cube::scaleX(int x)
{
	x1 *= x;
	x2 *= x;
	x3 *= x;
	x4 *= x;
	x5 *= x;
	x6 *= x;
	x7 *= x;
	x8 *= x;
}

void Cube::scaleY(int y)
{
	y1 *= y;
	y2 *= y;
	y3 *= y;
	y4 *= y;
	y5 *= y;
	y6 *= y;
	y7 *= y;
	y8 *= y;
}

void Cube::scaleZ(int z)
{
	z1 *= z;
	z2 *= z;
	z3 *= z;
	z4 *= z;
	z5 *= z;
	z6 *= z;
	z7 *= z;
	z8 *= z;
}

void Cube::scale(int scale)
{
	x1 /= scale; y1 /= scale; z1 /= scale;
	x2 /= scale; y2 /= scale; z2 /= scale;
	x3 /= scale; y3 /= scale; z3 /= scale;
	x4 /= scale; y4 /= scale; z4 /= scale;
	x5 /= scale; y5 /= scale; z5 /= scale;
	x6 /= scale; y6 /= scale; z6 /= scale;
	x7 /= scale; y7 /= scale; z7 /= scale;
	x8 /= scale; y8 /= scale; z8 /= scale;
}
