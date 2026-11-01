#include "Point.h"
#pragma once

class Segment{
    private:
        Point o,e;
    
    public:
        Segment(double x,double y, double u, double v);
        double calculeDistance() const;
        void afficherExtremiter() const;
};