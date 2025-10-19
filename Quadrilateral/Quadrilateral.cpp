#include <iostream>
#include "Quadrilateral.h"

Quadrilateral::Quadrilateral(int s1, int s2, int s3, int s4, int a1, int a2, int a3, int a4) : Figure("Четырехугольник"), side1(s1), side2(s2), side3(s3), side4(s4), angle1(a1), angle2(a2), angle3(a3), angle4(a4) {}
void Quadrilateral::print_info() const {
	std::cout << name << ": " << std::endl;
	std::cout << "Стороны: " << side1 << ", " << side2 << ", " << side3 << ", " << side4 << std::endl;
	std::cout << "Углы: " << angle1 << ", " << angle2 << ", " << angle3 << ", " << angle4 << std::endl;
}