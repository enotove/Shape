#pragma once
#include "Line.h"

class Square : public Line
{
public:
	Square(int _x1, int _y1, int _x2, int _y2, int _x3, int _y3, int _x4, int _y4): Line(_x1, _y1, _x2, _y2);
	void shift(int x, int y) override;
	void scaleX(int x) override;
	void scaleY(int y) override;
	void scale(int scale) override;
};