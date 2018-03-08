#ifndef PUNKT_H
#define PUNKT_H

class Punkt {
    float m_x,m_y;

public:
    Punkt() {};
    Punkt(float x, float y);
    float x() const;
    float y() const;
};

#endif
