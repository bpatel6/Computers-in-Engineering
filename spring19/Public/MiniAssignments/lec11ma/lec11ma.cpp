/*-----------------------------------------------------------------
 * Programmer: Your name
 * Description: This file contains the mini-assignment
 * to practice with pointer manipulations
 *
 * In all cases, we desire to print out the values "22 33 44 55 66 77 88"
 * to the screen.
 *
 * Correct these loops with the LEAST number of character changes to the code!
 * In most cases the loops can be fixed with only 1 or two character changes.
 -----------------------------------------------------------------*/

#include <iostream>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include "lec11tasks.h"
using namespace std;


/* main function */
int main()
{



  const size_t N=9;
  const size_t LAST_VALID_ELEMENT=7;
  int a[N] = {-999999999,22,33,44,55,66,77,88,-999999999};

  print_values_0(a);

  print_values_1(a,LAST_VALID_ELEMENT);
  print_values_2(a,LAST_VALID_ELEMENT);
  print_values_3(a,LAST_VALID_ELEMENT);
  print_values_4(a,LAST_VALID_ELEMENT);
  print_values_5(a,LAST_VALID_ELEMENT);
  print_values_6(a,LAST_VALID_ELEMENT);
  print_values_7(a,LAST_VALID_ELEMENT);

  return 0;
}

