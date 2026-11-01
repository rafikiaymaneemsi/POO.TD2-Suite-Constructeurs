#include "Segment.h"
#include <iostream>

Segment::Segment(double x, double y, double u, double v)
    : o(x, y), e(u, v)
{}

double Segment::calculeDistance() const{
    return o.distance(e);
}

void Segment::afficherExtremiter() const
{
    std::cout << "Point d'origine : ";
    o.afficher();

    std::cout << "Point d'extremite : ";
    e.afficher();
}