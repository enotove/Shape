#include "Cylinder.h"

Cylinder::Cylinder(int _x1, int _y1, double R, double H)
{
	setType(TypeShape::Cylinder);
	x1 = _x1; y1 = _y1;
	radius = R;
	height = H;

	Area();

	Volume();
}
