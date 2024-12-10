#pragma once
#include<string>


enum TypeTransform
{
	Shift,
	ScaleX,
	ScaleY,
	ScaleZ,
	Scale
};
enum TypeShape
{
	Line,
	Sqr,
	Cube,
	Circle,
	Cylinder
};

class Shape
{
	
private:
	
	double volume = 0;
	double square = 0;
	double height;
	double radius;

	

	void Area();
	void Volume();

	TypeShape type;
	
	TypeShape getType() { return type; }

protected:
	void setType(TypeShape type);
public:

	virtual void shift(int x, int y, int z);
	virtual void scaleX(int x);
	virtual void scaleY(int y);
	virtual void scaleZ(int z);
	virtual void scale(int scale);
	Shape() = default;
	/*
	Shape(int _x1, int _y1, int _x2, int _y2, int _x3, int _y3, int _x4, int _y4);
	Shape(int _x1, int _y1, int _z1, int _x2, int _y2, int _z2, int _x3, int _y3, int _z3, int _x4, int _y4, int _z4, int _x5, int _y5, int _z5, int _x6, int _y6, int _z6, int _x7, int _y7, int _z7, int _x8, int _y8, int _z8);
	Shape(TypeShape type, int _x1, int _y1, double R, double H);*/
	


	
	
	
	
};

