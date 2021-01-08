//-----------------------------------------------------------------------------
// Name: lec17ex.cpp
// Description: This program contains in-class examples
//              associated with lecture 17 (constructor/destructor basics)
//-----------------------------------------------------------------------------
#include <iostream>
#include <stdexcept>
#include "classExamples.h"

using namespace std;

void constructorExampleA() {
    MyClassA myClassAObject;

    cout << myClassAObject.getX() << " " << myClassAObject.getY() << endl;
}

void constructorExampleB() {
    MyClassB myClassBObject;

    cout << myClassBObject.getX() << " " << myClassBObject.getY() << endl;
}

void constructorExampleC() {
    // MyClassC myClassCObject; // not allowed: default constructor not automatically provided since
    // user-defined constructor defined
    MyClassC myClassCObject(1, 1);

    cout << myClassCObject.getX() << " " << myClassCObject.getY() << endl;
}

void constructorExampleD() {
    MyClassD myClassDObject1;
    MyClassD myClassDObject2(2);
    MyClassD myClassDObject3(3, 3);

    cout << myClassDObject1.getX() << " " << myClassDObject1.getY() << endl;
    cout << myClassDObject2.getX() << " " << myClassDObject2.getY() << endl;
    cout << myClassDObject3.getX() << " " << myClassDObject3.getY() << endl;
}

void constructorExampleE() {
    MyClassE myClassEObject1;
    MyClassE myClassEObject2(2);
    MyClassE myClassEObject3(3, 3);

    cout << myClassEObject1.getX() << " " << myClassEObject1.getY() << endl;
    cout << myClassEObject2.getX() << " " << myClassEObject2.getY() << endl;
    cout << myClassEObject3.getX() << " " << myClassEObject3.getY() << endl;
}

void destructorExample1() {
    AnotherClass object0;
    AnotherClass object1(1);
    AnotherClass object2(2);
}

int main() {
    //-----------------------
    // constructor examples:
    //-----------------------

    cout << "constructorExampleA():" << endl;
    constructorExampleA();

    cout << endl;
    cout << "constructorExampleB():" << endl;
    constructorExampleB();

    cout << endl;
    cout << "constructorExampleC():" << endl;
    constructorExampleC();

    cout << endl;
    cout << "constructorExampleD():" << endl;
    constructorExampleD();

    cout << endl;
    cout << "constructorExampleE():" << endl;
    constructorExampleE();

    //----------------------
    // destructor examples:
    //----------------------

    cout << endl;
    cout << "destructorExample1():" << endl;
    destructorExample1();

    return 0;
}
