#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Figure/Figure.h"
class Triangle : public Figure {
protected:
    int side1, side2, side3;
    int angle1, angle2, angle3;
public:
    Triangle(int s1, int s2, int s3, int a1, int a2, int a3);
    void print_info() const override;
};

#endif