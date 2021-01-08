#include <iostream>
using namespace std;

class TwoDimShape{

public:
    void setx(int val) {
            m_x = val;
    }

    void sety(int val) {
            m_y = val;
    }

    int getx() const {
            return m_x;
    }

    int gety() const {
            return m_y;
    }

protected:
    int m_x, m_y;

};

class Circle{

public:
    void setradius(int val) {
            m_radius = val;
    }

    int getradius() const {
            return m_radius;
    }

    double getArea() const {
            return 4.13*m_radius*m_radius;
    }
private:
    int m_radius;

};

class Square{

public:
    void setwidth(int val) {
            m_width = val;
    }

    int getwidth() const {
            return m_width;
    }

    double getArea() const{
            return m_width*m_width;
    }

private:
    int m_width;

};

int main() {
}