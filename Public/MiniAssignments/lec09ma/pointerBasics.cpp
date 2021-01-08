#include <iostream>
#include "pointerBasics.h"
using namespace std;

/* EXAMPLE PROGRAM 1 - learning that each variable
   has an address */
void pointerEx()
{
    float myVariable = 5.0;

    cout << "The value of myVariable is " << myVariable << endl;
    cout << "The address of myVariable is " << &myVariable << endl;

}

/* EXAMPLE PROGRAM 2 - learning that a pointer
   is a variable whose values are memory addresses*/
void ptrAddressEx ()
{
    float myVariable = 5.0;
    float *ptr = nullptr;

	cout << "The value of myVariable is " << myVariable << endl;
    cout << "The address of myVariable is " << &myVariable << endl;

    ptr = &myVariable;
    cout << "The value of ptr is " << ptr << endl;
    cout << "The address of ptr is " << &ptr << endl;


}

/* EXAMPLE PROGRAM 3 - code for mailbox analogy */
void mailboxEx ()
{
    float myMail = 6.75;
    float *ptr = nullptr;

    ptr = &myMail;

    cout << "The value of myMail is " <<myMail << ".\n" ;
    cout << "The address of myMail is " << &myMail << ".\n" ;
    cout << "The value of ptr is " << ptr << ".\n" << endl;

}

/* EXAMPLE PROGRAM 4 - deferencing a pointer */
void derefEx ()
{
    float myMail = 6.75;
    float *ptr = nullptr;

    ptr = &myMail;

    cout << "The value of myMail is " <<myMail << ".\n" ;
    cout << "The address of myMail is " << &myMail << ".\n" ;
    cout << "The value of ptr is " << ptr << ".\n" << endl;

    *ptr = *ptr + 1;
    cout << "The value of myMail is "<< myMail << ".\n" ;
    cout << "The value of *ptr is "<< *ptr << ".\n" ;

}

/* EXAMPLE PROGRAM 5 - a clicker question on determining
   the final value of x */
void clicker1 ()
{
    int x = 5;
    int *ptr;

    x = x + 2;
    ptr = &x;
    x = x + 1;
    *ptr = *ptr + 2;

	cout << "x = " << x << endl;

}


/* EXAMPLE PROGRAM 6 - a clicker question on determining
   the output */
void mysteryFunction(int *val)
{
    *val = *val + *val;
}


void clicker2 ()
{
    int x = 5;
    int *ptr = &x;

    mysteryFunction(&x);
    mysteryFunction(ptr);

    cout << x << endl;

}


void simulatedPassByRef (int *ptr) {
	//TODO: Complete the implementation of this function to set the value of the int to 7
}

void miniassignment () {
    int x = 3;
    int y = 8;
    //TODO: declare variable ptr as a pointer to int

    //TODO: declare variable ptr2ptr as a pointer to pointer to int

    //TODO: make ptr reference x

    //TODO: make ptr2ptr reference ptr

    //TODO: Print the value of x using variable ptr

    //TODO: Print the value of x using variable ptr2ptr

    //TODO: Call the function simulatedPassByRef to change the value of x using ptr

    //TODO: Call the function simulatedPassByRef to change the value of y

    //print the new values of x and y
    cout << "x = " << x << ", y = " << y << endl;
}
