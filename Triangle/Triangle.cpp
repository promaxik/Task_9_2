#include "Triangle.h"
#include <iostream>
Triangle::Triangle(int s1, int s2, int s3, int a1, int a2, int a3) : Figure("�����������"), side1(s1), side2(s2), side3(s3), angle1(a1), angle2(a2), angle3(a3) {}
void Triangle::print_info() const {
	std::cout << name << ": " << std::endl;
	std::cout << "�������: " << side1 << ", " << side2 << ", " << side3 << std::endl;
	std::cout << "����: " << angle1 << ", " << angle2 << ", " << angle3 << std::endl;
}