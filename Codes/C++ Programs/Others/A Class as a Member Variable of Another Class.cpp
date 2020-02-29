A Class as a Member Variable of Another Class
This is an example of one object (the shape class implements a rectangle) being a member variable of another object (a brick).

Header File: shape.h

#ifndef _SHAPE_H
#define _SHAPE_H

class FRectangle
{
public:
	FRectangle(double l = 0, double w = 0)
		: Length(l), Width(w) {}
	void setLength(double lgt);
	void setWidth(double wdt);
	double getLength() const;
	double getWidth() const;
	double Perimeter() const;
	double Area() const;
	void Properties();
private:
	double Length;
	double Width;
};

#endif // _SHAPE_H

Source File: shape.cpp

#include <iostream.h>
#include "shape.h"

void FRectangle::setLength(double lgt)
{
	Length = lgt;
}

void FRectangle::setWidth(double wdt)
{
	Width = wdt;
}

double FRectangle::getLength() const
{
	return Length;
}

double FRectangle::getWidth() const
{
	return Width;
}

double FRectangle::Perimeter() const
{
	return 2 * (Length + Width);
}

double FRectangle::Area() const
{
	return Length * Width;
}

void FRectangle::Properties()
{
	cout << "\nRectangle characteristics";
	cout << "\n\tLength    = " << Length;
	cout << "\n\tWidth     = " << Width;
	cout << "\n\tPerimeter = " << Perimeter();
	cout << "\n\tArea      = " << Area() << endl;
}

Header File: brick.h

#ifndef BRICK_H_
#define BRICK_H_

#include "shape.h"

class Brick
{
public:
	Brick() {}
	void setThickness(double Tck);
	void setDimensions(double l, double w, double t);
	void setColor(char* clr);
	void setTexture(char* txr);
	char* getColor() const;
	char* getTexture() const;
	double Volume() const;
	void Display();
private:
	FRectangle shape;
	char* Color;
	char* Texture;
	double Thickness;
};

#endif // BRICK_H_

Source File: brick.cpp

#include <iostream.h>
#include "brick.h"

void Brick::setThickness(double Tck)
{
	Thickness = Tck;
}

void Brick::setColor(char* clr)
{
	Color = clr;
}

void Brick::setTexture(char* txr)
{
	Texture = txr;
}

void Brick::setDimensions(double l, double w, double t)
{
	shape.setLength(l);
	shape.setWidth(w);
	setThickness(t);
}

char* Brick::getColor() const
{
	return Color;
}

char* Brick::getTexture() const
{
	return Texture;
}

double Brick::Volume() const
{
	return shape.getLength() * shape.getWidth() * Thickness;
}

void Brick::Display()
{
	cout << "\nBrick characteristics";
	cout << "\n\tLength   = " << shape.getLength();
	cout << "\n\tWidth    = " << shape.getWidth();
	cout << "\n\tArea     = " << shape.Area();
	cout << "\n\tVolume   = " << Volume();
	cout << "\n\tColor    = " << getColor();
	cout << "\n\tTextture = " << getTexture();
	cout << endl;
}

Main File: Exo.cpp

#include "shape.h"
#include "brick.h"

void main()
{
	Brick brick;

	brick.setDimensions(12.50, 8.75, 5.55);
	brick.setColor("Bone White");
	brick.setTexture("Early Breeze");

	brick.Display();
}

Here is an example of running the program:

Brick characteristics
        Length   = 12.5
        Width    = 8.75
        Area     = 109.375
        Volume   = 607.031
        Color    = Bone White
        Textture = Early Breeze
