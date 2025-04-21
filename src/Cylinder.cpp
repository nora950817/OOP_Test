#ifndef CYLINDER_CPP
#define CYLINDER_CPP

#include "Cylinder.h"
#include <iomanip>  

double Cylinder::SurfaceArea() {
    return 2 * 3.1415 * radius * (radius + height);
}

double Cylinder::Volume() {
    return 3.1415 * radius * radius * height;
}

double Cylinder::Circumference() {
    return 4 * 3.1415 * radius;
}

istream& operator>>(istream& in, Cylinder& cldr) {
    in >> cldr.radius >> cldr.height;
    return in;
}

ostream& operator<<(ostream& out, Cylinder& cldr) {
    out << fixed << setprecision(3);
    out << "Circumference: " << cldr.Circumference() << endl;
    out << "SurfaceArea: " << cldr.SurfaceArea() << endl;
    out << "Volume: " << cldr.Volume();
    return out;
}

#endif
