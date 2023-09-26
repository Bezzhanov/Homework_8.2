#pragma once
#include <iostream>
#include <exception>
#include "class_figure.h"

class WrongFigure : public std::domain_error {
public:
	WrongFigure(const std::string& err);
	const char* what() const throw();
private:
	std::string m_err;
};