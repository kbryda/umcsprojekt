#include "punkt.h"

Punkt::Punkt(float x, float y) {
    this->m_x=x;
    this->m_y=y;
}

float Punkt::y() const {
    return m_y;}

float Punkt::x() const {
    return m_x;
}
