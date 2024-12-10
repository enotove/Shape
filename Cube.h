#pragma once
#include "Line.h"

class Cube : public Line
{
public:
	Cube(int _x1, int _y1, int _z1, int _x2, int _y2, int _z2, int _x3, int _y3, int _z3, int _x4, int _y4, int _z4,
		int _x5, int _y5, int _z5, int _x6, int _y6, int _z6, int _x7, int _y7, int _z7, int _x8, int _y8, int _z8) : Line(_x1, _y1, _x2, _y2);
	void shift(int x, int y, int z) override;
	void scaleX(int x) override;
	void scaleY(int y) override;
	void scaleZ(int z) override;
	void scale(int scale) override;

};