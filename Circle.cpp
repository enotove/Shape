#include "Circle.h"

Circle::Circle(int _x1, int _y1, double R, double H)
{
	setType(TypeShape::Circle);
	x1 = _x1; y1 = _y1;
	radius = R;

	Area();

}
