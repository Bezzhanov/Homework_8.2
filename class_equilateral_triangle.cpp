#include "class_equilateral_triangle.h"

EquilateralTriangle::EquilateralTriangle(int a, int b, int c, int A, int B, int C) :Triangle(a, b, c, A, B, C) {
	if (((a != b) || (b != c)) ||
		((A != B) || (B != C))
		) {
	
		throw WrongFigure("all sides must be equal and all angles must be 60");
	
	}
	
	name = "Equilateral Triangle";
}