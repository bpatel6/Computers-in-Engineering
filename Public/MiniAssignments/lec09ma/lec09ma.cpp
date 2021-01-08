/*-------------------------------------------------------------------------
 * Programmer: TODO: YOUR NAME HERE
 * Name: lec09ma.cpp
 * Description: This file contains example programs and mini-assignment
 *				from lecture over pointer basics.
 -------------------------------------------------------------------------*/
#include <iostream>
#include "pointerBasics.h"
using namespace std;

int main(void)
{
	/* EXAMPLE PROGRAM 1 - learning that each variable
	   has an address */
	cout << endl << " **** PointerEx ****************************" << endl;
	pointerEx();

	/* EXAMPLE PROGRAM 2 - learning that a pointer
	   is a variable whose values are memory addresses*/
	cout << endl << " **** PtrAddressEX ****************************" << endl;
	ptrAddressEx();

	/* EXAMPLE PROGRAM 3 - code for mailbox analogy */
	cout << endl << " **** MailboxEx ****************************" << endl;
	mailboxEx();

	/* EXAMPLE PROGRAM 4 - deferencing a pointer */
	cout << endl << " **** DerefEx ****************************" << endl;
	derefEx();

	/* EXAMPLE PROGRAM 5 - a clicker question on determining
	   the final value of x */
	//cout << endl << " **** ClickerQ1 ****************************" << endl;
	//clicker1();

	/* EXAMPLE PROGRAM 6 - a clicker question on determining
	   the output */
	//cout << endl << " **** ClickerQ2 ****************************" << endl;
	//clicker2();

	/* MINI-Assignment*/
	cout << endl << " **** Miniassignment ****************************" << endl;
	miniassignment();
}


