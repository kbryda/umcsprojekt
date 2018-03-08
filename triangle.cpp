#include "triangle.h"
#include <cmath>

Triangle::Triangle(Punkt a, Punkt b, Punkt c) {
    this->a=a;
    this->b=b;
    this->c=c;
}

float Triangle::distance(Punkt p, Punkt q) {
    float dx=p.x()-q.x();
    float dy=p.y()-q.y();
    return sqrt(dx*dx+dy*dy);
}

float Triangle::perimeter() {
    return distance(a,b)+distance(b,c)+distance(c,a);
}

float Triangle::area() {
    float p=perimeter()/2;
    return sqrt(p*(p-distance(a,b))*(p-distance(b,c))*(p-distance(c,a)));
}
