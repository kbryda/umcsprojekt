#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "punkt.h"

class Triangle {
    Punkt a, b, c;

    float distance(Punkt p, Punkt q);

public:
    Triangle(Punkt a, Punkt b, Punkt c);

    float perimeter();
    float area();
};

#endif
