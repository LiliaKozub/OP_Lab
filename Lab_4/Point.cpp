#include "Point.h"
#include <cmath>

Point::Point() {
    r = 0;
    theta = 0;
    z =0;
}

Point::Point(float r, float theta, float z) {
    this->r = r;
    this->theta = theta;
    this->z = z;
}

Point::Point(float x, float y) {
    r = sqrt(x*x + y*y);
    theta = atan2(y, x);
    z = 0;
}

void Point::Set_z(float z) {
    this->z = z;
}

float Point::Get_r() {return r;}

float Point::Get_theta(){return theta;}

float Point::Get_z() {return z;}

float Point::Get_distance() {return sqrt(r*r + z*z);}

Point &Point::operator++() {
    this->theta++;
    return *this;
}

Point &Point::operator+=(float delta) {
    this->r += delta;
    return *this;
}

bool Point::operator==(const Point &other) {
    return ((this->r == other.r) && (this->theta == other.theta) && (this->z == other.z));
}
