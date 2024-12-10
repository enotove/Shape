#include "shape.h"
#include "shape.h"
#include "shape.h"
#include "shape.h"
#include "shape.h"
#include "shape.h"
#define _USE_MATH_DEFINES
#include"shape.h"
#include <iostream>
#include<cmath>
#include "transform.h"
void Shape::Area()
{
	switch (type)
	{
	case TypeShape::Sqr:
		square = side_a * side_b;
		break;
	case TypeShape::Cube:
		square = 2 * side_a * side_b + 2 * side_a * side_c + 2 * side_b * side_c;
		break;
	case TypeShape::Circle:
		square = M_PI * radius * radius;
		break;
	case TypeShape::Cylinder:
		square = M_PI * radius * radius + 2 * radius * height;
		break;
	default:
		break;
	}
}
void Shape::Volume()
{
	switch (type)
	{

	case TypeShape::Cube:
		volume = side_a * side_b * side_c;
		break;
	case TypeShape::Cylinder:
		volume = M_PI * radius * radius * height;
		break;
	default:
		break;
	}
}
void Shape::setType(TypeShape type)
{
	this->type = type;
}

void Shape::shift(int x, int y, int z)
{
}

void Shape::scaleX(int x)
{
}

void Shape::scaleY(int y)
{
}

void Shape::scaleZ(int z)
{
}

void Shape::scale(int scale)
{
}

