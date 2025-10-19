#include <iostream>
#include "Figure/Figure.h"
#include "Triangle/Triangle.h"
#include "RightTriangle/RightTriangle.h"
#include "IsoscelesTriangle/IsoscelesTriangle.h"
#include "EquilateralTriangle/EquilateralTriangle.h"
#include "Quadrilateral/Quadrilateral.h"
#include "Parallelogram/Parallelogram.h"
#include "Rectangle/Rectangle.h"
#include "Rhomb/Rhomb.h"
#include "Square/Square.h"




int main() {
    setlocale(LC_ALL, "Russian");
    Quadrilateral quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
    Parallelogram parallelogram(20, 30, 30, 40);
    Rectangle rectangle(10, 20);
    Rhomb rhomb(30, 30, 40);
    Square square(20);
    Triangle triangle(10, 20, 30, 50, 60, 70);
    RightTriangle rightTriangle(10, 20, 30, 50, 60);
    IsoscelesTriangle isoscelesTriangle(10, 20, 50, 60);
    EquilateralTriangle equilateralTriangle(30);
    Figure* figures[] = { &quadrilateral, &parallelogram, &rectangle, &rhomb, &square, &triangle, &rightTriangle, &isoscelesTriangle, &equilateralTriangle };
    for (Figure* figure : figures) {
        figure->print_info();
        std::cout << std::endl;
    }
    return 0;
}
