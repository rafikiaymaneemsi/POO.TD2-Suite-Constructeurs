#pragma once

class Point {
    private:
        double x, y;
    
    public:
        Point(double x = 0,double y = 0);
        void afficher () const;
        double distance(const Point& P) const;
};