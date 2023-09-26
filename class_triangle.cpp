#include "class_triangle.h"
#include <iostream>
#include "class_fig_exc.h"


Triangle::Triangle() {};
Triangle::Triangle(int a, int b, int c, int A, int B, int C) {

	if (A + B + C != 180){

		throw WrongFigure("The sum of the angles is not equal 180");

	} 

	this->a = a;
	this->b = b;
	this->c = c;
	this->A = A;
	this->B = B;
	this->C = C;
	this->name = "Triangle";

}

void Triangle::print() {
	std::cout << this->get_name() << ":";
	std::cout << "(sides: " << this->get_a() << " " << this->get_b() << " " << this->get_c() << "; ";
	std::cout << "angles: " << this->get_A() << " " << this->get_B() << " " << this->get_C() << ") created" << std::endl;
	std::cout << std::endl;
};

int Triangle::get_a() { return this->a; };
int Triangle::get_b() { return this->b; };
int Triangle::get_c() { return this->c; };
int Triangle::get_A() { return this->A; };
int Triangle::get_B() { return this->B; };
int Triangle::get_C() { return this->C; };