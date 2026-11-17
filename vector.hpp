#ifndef VECTOR_HPP
#define VECTOR_HPP
#include <cmath>
#include <iostream>

namespace geometry {

class Vector {
    public:
        double x;
        double y;
        double z;
        
        Vector();
        Vector(double x, double y, double z);

        double dot(const Vector& other) const;
        double length() const;
        double magnitude() const;
        Vector cross(const Vector& other) const;
};

Vector operator+(const Vector& first, const Vector& second);
Vector operator-(const Vector& first, const Vector& second);
double operator*(const Vector& first, const Vector& second);  // dot product
Vector operator*(const Vector& v, double scalar);
Vector operator*(double scalar, const Vector& v);
std::ostream& operator<<(std::ostream& out, const Vector& v);

}

#endif  // VECTOR_HPP
