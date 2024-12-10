#pragma once
#include "shape.h"

class Line : public Shape
{
protected:

	int side_a;
	int side_b;
	int side_c;

	int x1 = 0, y1 = 0, z1 = 0,
		x2 = 0, y2 = 0, z2 = 0,
		x3 = 0, y3 = 0, z3 = 0,
		x4 = 0, y4 = 0, z4 = 0,
		x5 = 0, y5 = 0, z5 = 0,
		x6 = 0, y6 = 0, z6 = 0,
		x7 = 0, y7 = 0, z7 = 0,
		x8 = 0, y8 = 0, z8 = 0;

public:
	Line(int _x1, int _y1, int _x2, int _y2);
	void shift(int x, int y) override;
	void scaleX(int x) override;
	void scaleY(int y) override;
	void scale(int scale) override;

};

