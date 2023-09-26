#pragma once
#include "class_figure.h"


class Quadrangle : public Figure {
public:
	Quadrangle();
	Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D);
	void print();
	int get_a();
	int get_b();
	int get_c();
	int get_d();
	int get_A();
	int get_B();
	int get_C();
	int get_D();

protected:
	int a{};
	int b{};
	int c{};
	int d{};
	int A{};
	int B{};
	int C{};
	int D{};

};