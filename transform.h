#pragma once
#include"shape.h"
class Transform
{
public:
	Transform(const Shape& sh);
	void shift(int x, int y, int z);
	void scaleX(int x);
	void scaleY(int y);
	void scaleZ(int z);
	void scale(int scale);
private:
	Shape shape;
	

};

