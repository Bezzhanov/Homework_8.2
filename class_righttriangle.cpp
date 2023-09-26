#include "class_triangle.h"
#include "class_right_triangle.h"

RightTriangle::RightTriangle(int a, int b, int c, int A, int B, int C): Triangle(a, b, c, A, B, C) {
	
	if (C != 90) {

		throw WrongFigure("Angle C should be 90 degrees");

	}
	
	
	name = "Right triangle";

};
