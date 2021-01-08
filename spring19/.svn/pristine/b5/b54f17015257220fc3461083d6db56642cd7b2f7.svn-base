#include <iostream>
#include "Node.h"
#include "List.h"
using namespace std;

int main() {
    // Description: Check if the list is empty
    List A;
    std::cout << "List A should be empty expected ans = 1 " << std::endl;
    std::cout << "Ans: " << A.empty() << std::endl;

    // Description: Insert value to the list A and prints the list A
    A.insert(5);
    A.insert(30);
    A.insert(50);
    A.insert(100);
    A.insert(6);
    A.insert(1);
    std::cout << "List A should be 1 5 6 30 50 100" << std::endl;
    std::cout << "List A is: " << std::endl;
    A.print();
    std::cout << "\nIs list A still empty? expected ans = 0" << std::endl;
    std::cout << "Ans: " << A.empty() << std::endl;

    // Description: Remove value from the list A and print the new list A
    A.remove(6);
    A.remove(50);
    std::cout << "List A should be 1 5 30 100" << std::endl;
    std::cout << "Value 6 and 50 is removed from list A. The new list A is: " << std::endl;
    A.print();

    // Description: Remove all the element of list A
    std::cout << "\nList A is being cleared: " << std::endl;
    A.clear();
    std::cout << "Is list A empty? expected ans = 1" << std::endl;
    std::cout << "Ans: " << A.empty() << std::endl;

    // Description: New list B is made and check if it's empty and then added value to it
    List B;
    std::cout << "Is list B empty? expected ans = 1" << std::endl;
    std::cout << "Ans: " << B.empty() << std::endl;

    // Inserted value -5, -30, 0, 60, 90
    B.insert(-5);
    B.insert(-30);
    B.insert(0);
    B.insert(60);
    B.insert(90);
    std::cout << "List B should be -30 -5 0 60 90" << std::endl;
    std::cout << "List B is: " << std::endl;
    B.print();

    // Description: Copying list B to list C
    std::cout << "\nList B is copied into List C " << std::endl;
    List C = B;
    std::cout << "List C should be -30 -5 0 60 90" << std::endl;
    std::cout << "List C is: " << std::endl;
    C.print();

    // Description: modifying list C and printing both b and c list at the end
    C.remove(-5);
    C.remove(90);
    std::cout << "\nModified list C should be -30 0 60, value -5 and 90 removed" << std::endl;
    std::cout << "Modified list C is: " << std::endl;
    C.print();
    std::cout << "\nOriginal list B should be -30 -5 0 60 90" << std::endl;
    std::cout << "Original list B is: " << std::endl;
    B.print();
    std::cout << "\nDestructor for list C, B and A(A is empty) are called" << std::endl;

}