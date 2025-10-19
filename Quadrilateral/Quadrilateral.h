#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H
#include "Figure/Figure.h"
class Quadrilateral : public Figure {
protected:
    int side1, side2, side3, side4;
    int angle1, angle2, angle3, angle4;
public:
    Quadrilateral(int s1, int s2, int s3, int s4, int a1, int a2, int a3, int a4);
    void print_info() const override;
};
#endif