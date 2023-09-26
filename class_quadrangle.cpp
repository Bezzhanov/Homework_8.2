#include "class_quadrangle.h"

Quadrangle::Quadrangle() {};
Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) {
	
	if (A + B + C + D != 360) {

		throw WrongFigure("The sum of the angles is not equal 360");

	}
	
	
	this->a = a;
	this->b = b;
	this->c = c;
	this->d = d;
	this->A = A;
	this->B = B;
	this->C = C;
	this->D = D;
	this->name = "Quadrangle";
}
void Quadrangle::print() {
	std::cout << this->get_name() << ":";
	std::cout << "(sides: " << this->get_a() << " " << this->get_b() << " " << this->get_c() << " " << this->get_d() << "; ";
	std::cout << "angles: " << this->get_A() << " " << this->get_B() << " " << this->get_C() << " " << this->get_D() << ") created " << std::endl;
	std::cout << std::endl;
};

int Quadrangle::get_a() { return this->a; };
int Quadrangle::get_b() { return this->b; };
int Quadrangle::get_c() { return this->c; };
int Quadrangle::get_d() { return this->d; };
int Quadrangle::get_A() { return this->A; };
int Quadrangle::get_B() { return this->B; };
int Quadrangle::get_C() { return this->C; };
int Quadrangle::get_D() { return this->D; };