#pragma once
#include "class_figure.h"
#include <iostream>

class Triangle : public Figure {
public:

	Triangle();
	Triangle(int a, int b, int c, int A, int B, int C);

	void print();
	int get_a();
	int get_b();
	int get_c();
	int get_A();
	int get_B();
	int get_C();

protected:
	int a{};
	int b{};
	int c{};
	int A{};
	int B{};
	int C{};
};