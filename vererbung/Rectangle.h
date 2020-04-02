#pragma once
#include "shape.h"

class Rectangle : public Shape
{
public:
	Rectangle(double width, double height);

	std::string name() const override;
	double circumfence() const override;
	double area() const override;

private:
	double m_width;
	double m_height;
};