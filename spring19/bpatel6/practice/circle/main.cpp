//Name: Bhavik Patel
//Date: 02/04/2019

#include <iostream>
#include "radius.h"
using namespace std;
int main() {
    Circle c1;
    Circle c2(5);
    Circle c3(-5);
    Circle c4(10/5);

    cout << "radius = " << c1.getRadius() << endl;
    cout << "radius = " << c2.getRadius() << endl;
    cout << "radius = " << c3.getRadius() << endl;
    cout << "radius = " << c4.getRadius() << endl;
    printCircle(c1);
    printCircle(c2);

    return 0;
}