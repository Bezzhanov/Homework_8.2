#include "class_figure.h"
#include <iostream>

Figure::Figure() {name = "Фигура";};
std::string Figure::get_name() { return this->name; };