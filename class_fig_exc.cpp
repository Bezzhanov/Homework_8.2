#include <iostream>
#include "class_fig_exc.h"

WrongFigure::WrongFigure(const std::string& err):std::domain_error(m_err)
{
	this->m_err = "Error creation of the Figure. Reason: " + err;
}

const char* WrongFigure::what() const throw()
{
	
	return m_err.c_str();
}
