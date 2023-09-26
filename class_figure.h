#pragma once
#include <iostream>
#include "class_fig_exc.h"

class Figure {
public:
	Figure();
	std::string get_name();
	virtual void print() = 0;
protected:
	std::string name{};
};