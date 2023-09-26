#include "class_isosceles_triangle.h"

IsoscelesTriangle::IsoscelesTriangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) {
	if ((a != c) || (A != C)) {

		throw WrongFigure("Sides a and c and angles A and C must be equal");

	}
	name = "Isosceles Triangle";
};