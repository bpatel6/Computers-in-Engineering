#include "classExamples.h"
#include <iostream>

AnotherClass::AnotherClass(int id) : m_ID{id} {
    std::cout << "AnotherClass object with id = " << m_ID << " created. " << std::endl;
}

AnotherClass::~AnotherClass() { std::cout << "AnotherClass object with id = " << m_ID << " destroyed. " << std::endl; }
