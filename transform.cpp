#include "transform.h"


Transform::Transform(const Shape& sh)
{
	shape = sh;
}

void Transform::shift(int x, int y, int z)
{
	switch (shape.getType())
	{
	case TypeShape::Line:
		shape.x1 += x; shape.y1 += y;
		shape.x2 += x; shape.y2 += y;
		break;
	case TypeShape::Sqr:
		shape.x1 += x; shape.y1 += y;
		shape.x2 += x; shape.y2 += y;
		shape.x3 += x; shape.y3 += y;
		shape.x4 += x; shape.y4 += y;
		break;
	case TypeShape::Cube:
		shape.x1 += x; shape.y1 += y; shape.z1 += z;
		shape.x2 += x; shape.y2 += y; shape.z2 += z;
		shape.x3 += x; shape.y3 += y; shape.z3 += z;
		shape.x4 += x; shape.y4 += y; shape.z4 += z;
		shape.x5 += x; shape.y5 += y; shape.z5 += z;
		shape.x6 += x; shape.y6 += y; shape.z6 += z;
		shape.x7 += x; shape.y7 += y; shape.z7 += z;
		shape.x8 += x; shape.y8 += y; shape.z8 += z;
		break;
	}
	
}

void Transform::scaleX(int x)
{
	switch (shape.getType())
	{
	case TypeShape::Line:
		shape.x1 *= x;
		shape.x2 *= x;
		break;
	case TypeShape::Sqr:
		shape.x1 *= x;
		shape.x2 *= x;
		shape.x3 *= x;
		shape.x4 *= x;
		break;
	case TypeShape::Cube:
		shape.x1 *= x;
		shape.x2 *= x;
		shape.x3 *= x;
		shape.x4 *= x;
		shape.x5 *= x;
		shape.x6 *= x;
		shape.x7 *= x;
		shape.x8 *= x;
		break;
	}
	
}

void Transform::scaleY(int y)
{
	switch (shape.getType())
	{
	case TypeShape::Line:
		shape.y1 *= y;
		shape.y2 *= y;
		break;
	case TypeShape::Sqr:
		shape.y1 *= y;
		shape.y2 *= y;
		shape.y3 *= y;
		shape.y4 *= y;
		break;
	case TypeShape::Cube:
		shape.y1 *= y;
		shape.y2 *= y;
		shape.y3 *= y;
		shape.y4 *= y;
		shape.y5 *= y;
		shape.y6 *= y;
		shape.y7 *= y;
		shape.y8 *= y;
		break;
	}
	
}

void Transform::scaleZ(int z)
{
	switch (shape.getType())
	{
	case TypeShape::Line:
		shape.z1 *= z;
		shape.z2 *= z;
		break;
	case TypeShape::Sqr:
		shape.z1 *= z;
		shape.z2 *= z;
		shape.z3 *= z;
		shape.z4 *= z;
		break;
	case TypeShape::Cube:
		shape.z1 *= z;
		shape.y2 *= z;
		shape.z3 *= z;
		shape.z4 *= z;
		shape.z5 *= z;
		shape.z6 *= z;
		shape.z7 *= z;
		shape.z8 *= z;
		break;
	}
	
}

void Transform::scale(int scale)
{
	switch (shape.getType())
	{
	case TypeShape::Line:
		shape.x1 /= scale; shape.y1 /= scale;
		shape.x2 /= scale; shape.y2 /= scale;
		break;
	case TypeShape::Sqr:
		shape.x1 /= scale; shape.y1 /= scale;
		shape.x2 /= scale; shape.y2 /= scale;
		shape.x3 /= scale; shape.y3 /= scale;
		shape.x4 /= scale; shape.y4 /= scale;
		break;
	case TypeShape::Cube:
		shape.x1 /= scale; shape.y1 /= scale; shape.z1 /= scale;
		shape.x2 /= scale; shape.y2 /= scale; shape.z2 /= scale;
		shape.x3 /= scale; shape.y3 /= scale; shape.z3 /= scale;
		shape.x4 /= scale; shape.y4 /= scale; shape.z4 /= scale;
		shape.x5 /= scale; shape.y5 /= scale; shape.z5 /= scale;
		shape.x6 /= scale; shape.y6 /= scale; shape.z6 /= scale;
		shape.x7 /= scale; shape.y7 /= scale; shape.z7 /= scale;
		shape.x8 /= scale; shape.y8 /= scale; shape.z8 /= scale;
		break;
	}

}
