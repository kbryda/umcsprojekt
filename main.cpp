#include <iostream>
#include "triangle.h"

using namespace std;

int main() {
    		
    Triangle t(Punkt(1,2), Punkt(2,3), Punkt(3,4));
    cout <<"Obwód trójkąta :"<< t.perimeter() << "Pole trójkąta : " << t.area() << endl;
    return 0;
}
