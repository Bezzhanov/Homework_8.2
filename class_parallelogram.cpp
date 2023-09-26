#include "class_parallelogram.h"

Parallelogram::Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D) :Quadrangle(a, b, a, b, A, B, A, B) {
	if ((a != c || b != d) || (A != C || B != D)) {

		throw WrongFigure("sides a, c and b, d and angles A, C and B, D are equal in pairs");

	}


	this->name = "Parallelogram";
};