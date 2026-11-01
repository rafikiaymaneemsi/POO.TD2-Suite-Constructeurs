#include "Point.h"
#include <iostream>
#include <cmath>

Point::Point(double x, double y)
    : x(x), y(y)
{
}

void Point::afficher() const
{
    std::cout << "(" << x << ", " << y << ")" << std::endl;
}

double Point::distance(const Point& P) const
{
    return sqrt(pow(P.x - x, 2) + pow(P.y - y, 2));
}