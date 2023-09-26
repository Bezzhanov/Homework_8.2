#include "class_rhombus.h"

Rhombus::Rhombus(int a, int b, int c, int d, int A, int B, int C, int D) :Parallelogram(a, b, a, b, A, B, A, B) {
	if ((a != b || b != c || d != d) || (A != C || B != D)) {

		throw WrongFigure("all sides must be equal and angles A, C and B, D are equal in pairs");

	}

	this->name = "Rhombus";
};