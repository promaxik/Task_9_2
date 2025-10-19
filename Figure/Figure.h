#ifndef FIGURE_H
#define FIGURE_H
#include <string>
class Figure {
protected:
    std::string name;
public:
    Figure();
    Figure(std::string n);
    virtual void print_info() const = 0;
};
#endif