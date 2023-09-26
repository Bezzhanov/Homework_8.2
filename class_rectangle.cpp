#include "class_rectangle.h"

Rectangle::Rectangle(int a, int b, int c, int d, int A, int B, int C, int D) :Quadrangle(a, b, c, d, A, B, C, D) {

	if ((a != c || b != d) || (A != 90 || B != 90 || C != 90 || D != 90)) {

		throw WrongFigure("sides a,c and b,d must be equal in pairs and all angles are equal to 90");

	}
	this->name = "Rectangle";
};