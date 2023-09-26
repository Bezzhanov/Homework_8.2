#include "class_square.h"

Square::Square(int a, int b, int c, int d, int A, int B, int C, int D) :Quadrangle(a, b, c, d, A, B, C, D) {
	if ((a != b || b != c || d != d) || (A != 90 || B != 90 || C != 90 || D != 90)) {

		throw WrongFigure("all sides must be equal and all angles must be 90");

	}
	this->name = "Square";
};