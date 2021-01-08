//
// Created by Suku on 2/4/2019.
//
#include <iostream>
#include "radius.h"
using namespace std;

// No explicit
Circle::Circle(double radius) {
    setRadius(radius);
}

double Circle::getRadius() const {
    return m_radius;
}

void Circle::setRadius(double radius) {
    if (radius > 0){
        m_radius = radius;
    }
    else{
        m_radius = 0;
    }
}

void printCircle(Circle c1){
    cout << "circle radius is " <<  c1.getRadius() << endl;
}