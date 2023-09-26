#include <iostream>
#include "class_figure.h"
#include "class_triangle.h"
#include "class_right_triangle.h"
#include "class_isosceles_triangle.h"
#include "class_equilateral_triangle.h"
#include "class_quadrangle.h"
#include "class_parallelogram.h"
#include "class_rectangle.h"
#include "class_square.h"
#include "class_rhombus.h"
#include "class_fig_exc.h"


void print_info(Figure* x) {
	x->print();
}

int main() {
	setlocale(LC_ALL, "Ru");
	/*
	Triangle t(10, 20, 30, 50, 60, 70);
	print_info(&t);
	RightTriangle rt(10, 20, 30, 50, 60);
	print_info(&rt);
	IsoscelesTriangle it(10, 20, 50, 60);
	print_info(&it);
	EquilateralTriangle et(30);
	print_info(&et);
	Quadrangle q(10, 20, 30, 40, 50, 60, 70, 80);
	print_info(&q);
	Rectangle r(10, 20);
	print_info(&r);
	Square s(20);
	print_info(&s);
	Parallelogram p(20, 30, 30, 40);
	print_info(&p);
	Rhombus rmb(30, 30, 40);
	print_info(&rmb);
	*/
	std::cout << "Triangles:" << std::endl;
	try {
		Triangle t(10, 20, 30, 50, 60, 70);
		print_info(&t);
	}
	catch (const WrongFigure& wr) {
		std::cout << wr.what() << std::endl << std::endl;
	}

	try {
		Triangle t(10, 20, 30, 50, 60, 90);
		print_info(&t);
	}
	catch (const WrongFigure& wr) {
		std::cout << wr.what() << std::endl << std::endl;
	}

	try {
		RightTriangle rt(10, 20, 30, 30, 60, 90);
		print_info(&rt);
	}
	catch (const WrongFigure& wr) {
		std::cout << wr.what() << std::endl << std::endl;
	}

	try {
		RightTriangle rt(10, 20, 30, 60, 60, 60);
		print_info(&rt);
	}
	catch (const WrongFigure& wr) {
		std::cout << wr.what() << std::endl << std::endl;
	}

	try {
		IsoscelesTriangle it(10, 20, 10, 50, 80, 50);
		print_info(&it);

	}
	catch (const WrongFigure& wr) {
		std::cout << wr.what() << std::endl << std::endl;
	}

	try {
		IsoscelesTriangle it(10, 20, 20, 50, 80, 50);
		print_info(&it);

	}
	catch (const WrongFigure& wr) {
		std::cout << wr.what() << std::endl << std::endl;
	}

	try {
		EquilateralTriangle et(30, 30, 30, 60, 60, 60);
		print_info(&et);

	}
	catch (const WrongFigure& wr) {
		std::cout << wr.what() << std::endl << std::endl;
	}

	try {
		EquilateralTriangle et(30, 20, 30, 60, 60, 60);
		print_info(&et);

	}
	catch (const WrongFigure& wr) {
		std::cout << wr.what() << std::endl << std::endl;
	}

	std::cout << "Quadrangles:" << std::endl;

	try {
		Quadrangle q(10, 20, 30, 40, 90, 90, 100, 80);
		print_info(&q);
	}
	catch (const WrongFigure& wr) {
		std::cout << wr.what() << std::endl << std::endl;
	}

	try {
		Quadrangle q(10, 20, 30, 40, 50, 60, 70, 80);
		print_info(&q);
	}
	catch (const WrongFigure& wr) {
		std::cout << wr.what() << std::endl << std::endl;
	}

	try {
		Rectangle r(10, 20, 10, 20, 90, 90, 90, 90);
		print_info(&r);
	}
	catch (const WrongFigure& wr) {
		std::cout << wr.what() << std::endl << std::endl;
	}

	try {
		Rectangle r(10, 20, 01, 20, 90, 90, 90, 90);
		print_info(&r);
	}
	catch (const WrongFigure& wr) {
		std::cout << wr.what() << std::endl << std::endl;
	}

	try {
		Square s(20, 20, 20, 20, 90, 90, 90, 90);
		print_info(&s);
	}
	catch (const WrongFigure& wr) {
		std::cout << wr.what() << std::endl << std::endl;
	}

	try {
		Square s(35, 20, 47, 20, 90, 90, 90, 90);
		print_info(&s);
	}
	catch (const WrongFigure& wr) {
		std::cout << wr.what() << std::endl << std::endl;
	}

	try {
		Parallelogram p(20, 30, 20, 30, 90, 90, 90, 90);
		print_info(&p);
	}
	catch (const WrongFigure& wr) {
		std::cout << wr.what() << std::endl << std::endl;
	}

	try {
		Parallelogram p(20, 35, 20, 30, 90, 197, 90, 90);
		print_info(&p);
	}
	catch (const WrongFigure& wr) {
		std::cout << wr.what() << std::endl << std::endl;
	}
	try {
		Rhombus rmb(30, 30, 30, 30, 80, 100, 80, 100);
		print_info(&rmb);
	}
	catch (const WrongFigure& wr) {
		std::cout << wr.what() << std::endl << std::endl;
	}
	try {
		Rhombus rmb(30, 30, 30, 30, 80, 100, 100, 100);
		print_info(&rmb);
	}
	catch (const WrongFigure& wr) {
		std::cout << wr.what() << std::endl << std::endl;
	}



	return 0;
}