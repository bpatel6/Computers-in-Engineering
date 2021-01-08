//
// Created by Suku on 2/4/2019.
//

#ifndef CIRCLE_RADIUS_H
#define CIRCLE_RADIUS_H
class Circle {
public:
    // No return type for constructors
    // Define single input constructors explicit
    explicit Circle(double radius = 0); // constructor = intialize member variable
    double getRadius() const;           // returns a radius
    void setRadius(double radius);      // set a radius to variable

private:
    double m_radius{};
};

extern void printCircle(Circle c1);

#endif //CIRCLE_RADIUS_H
