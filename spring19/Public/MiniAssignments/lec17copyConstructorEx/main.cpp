#include <iostream>

using namespace std;

class MyClass {
public:
    MyClass(int value = 0); // constructor
//    MyClass(const MyClass & obj); // copy constructor
    ~MyClass(); // destructor
    void print() const;
    void setValue(int value);
    int getValue() const;
private:
    int * m_value;
};

MyClass::MyClass(int value){
    m_value = new int;  // Memory Allocated
    *m_value = value;
}

MyClass::~MyClass(){
    delete m_value; // Memory De-allocated
}

void MyClass::print() const{
    cout << "value = " << *m_value << endl;
}

void MyClass::setValue(int value) {
    *m_value = value;
}

int MyClass::getValue() const{
    return *m_value;
}

//MyClass::MyClass(const MyClass & obj){
//    m_value = new int;  // Memory Allocated
//    *m_value = obj.getValue();
//}



int main(){

    MyClass object1(1);
    MyClass object2(object1);

    object1.print();
    object2.print();
    object1.setValue(2);
    object1.print();
    object2.print();

    return 0;
}
