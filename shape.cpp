#define _USE_MATH_DEFINES
#include"shape.h"
#include <iostream>
#include<cmath>
#include "transform.h"
void Shape::Square()
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
-
Shape::Shape(int _x1, int _y1, int _x2, int _y2)
{
	type = TypeShape::Line;
	x1 = _x1; y1 = _y1;
	x2 = _x2; y2 = _y2;
}
Shape::Shape(int _x1, int _y1, int _x2, int _y2, int _x3, int _y3, int _x4, int _y4)
{
	type = TypeShape::Sqr;

	x1 = _x1; y1 = _y1;
	x2 = _x2; y2 = _y2;
	x3 = _x3; y3 = _y3;
	x4 = _x4; y4 = _y4;

	side_a = abs(x1 - x2);
	side_b = abs(y1 - y2);

	Square();

	Volume;
}
Shape::Shape(int _x1, int _y1, int _z1, int _x2, int _y2, int _z2, int _x3, int _y3, int _z3, int _x4, int _y4, int _z4, int _x5, int _y5, int _z5, int _x6, int _y6, int _z6, int _x7, int _y7, int _z7, int _x8, int _y8, int _z8)
{
	type = TypeShape::Cube;
	
	x1 = _x1; y1 = _y1; z1 = _z1;
	x2 = _x2; y2 = _y2; z2 = _z2;
	x3 = _x3; y3 = _y3; z3 = _z3;
	x4 = _x4; y4 = _y4; z4 = _z4;
	x5 = _x5; y5 = _y5; z5 = _z5;
	x6 = _x6; y6 = _y6; z6 = _z6; 
	x7 = _x7; y7 = _y7; z7 = _z7;
	x8 = _x8; y8 = _y8; z8 = _z8;
	
	
	// стороны фигуры
	side_a = abs(x1 - x2);
	side_b = abs(y1 - y2);
	side_c = abs(z1 - z2);
	// считаем площадь фигуры
	Square();
	

	// считаем объем фигуры
	Volume();

}

Shape::Shape(TypeShape _type, int _x1, int _y1, double R, double H)
{
	type = _type;
	// заполн¤ем координаты фигуры
	switch (type)
	{
	case circle:
		x1 = _x1; y1 = _y1;
		radius = R;
		break;
	case cylinder:
		x1 = _x1; y1 = _y1;
		radius = R;
		height = H;
		break;
	default:
		break;
	}

	// считаем площадь фигуры
	Square();

	// считаем объем фигуры
	Volume();

}

