/*-------------------------------------------------------------------------
 * Name: lec10_funcs.cpp
 * Description: This file contains examples from lecture over the
 *              similarities of pointers and arrays.
 -------------------------------------------------------------------------*/
#include <iostream>
#include <stdlib.h>
#include "lec10_funcs.h"
using namespace std;


void addFive(int *val) { *val = *val + 5; }

/* function prototypes for first two clicker questions */
int clickerQuestion1(void)
{
  int x = 0;

  //addFive(x);
  //addFive(&x);

  cout << "CQ1: x=" << x << endl;
  return 0;
}

int clickerQuestion2(void)
{
  int x = 0;
  int *ptr = &x;

  // addFive(ptr);
  // addFile(&ptr);

  cout << "CQ2: x=" << x << endl;
  return 0;
}

int obtainArraySum(int arr[], int arr_size)
{
  int i;
  for (i = 1; i < arr_size; i++)
  {
    arr[i] = arr[i] + arr[i - 1];
  }

  return arr[arr_size - 1];
}


void doSomething2(void)
{
  int a[3] = {2, 2, 2};
  int n = 3;
  int sum;

  sum = obtainArraySum(a, n);

  cout << sum << " " << a[0] << " " << a[1] << " " << a[2] << endl;
}


/* function prototype for additional example */
void anotherExample(void)
{
  int a[4] = {1, 1, 1, 1};
  int n = 4;
  int sum;

  sum = obtainArraySum(a, n);

  cout << sum << " " << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << endl;
}

void printArray (int *arr, int arr_size) {
	for (int i = 0; i < arr_size; i++)
	{
	    cout << arr[i] << " ";
	}
	cout << endl;

}

void arrayModificationExample(void) {
	int a[5] = {2, 2, 2, 2, 2};

	printArray(a, 5);
	tryToModifyArray(a, 5);
	printArray(a, 5);

}

void tryToModifyArray (int *arr, int n) {
	int i;
	for (i=0; i < n; i++)
	{
	    arr[i] = arr[i] - 1;
	}
}

void constantArrayExample(void)
{
    int a[5] = {1, 1, 1, 1, 1};
    int n = 5;
    int sum;

    sum = computeArraySum(a, n);
    printArray(a, n);
    cout << "sum = " << sum << endl;
}

int computeArraySum(const int * arr, int n)
{
    int sum = 0;
    int i;

    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    return sum;
}


/* a C string example */
void additionalStringExample( void )
{
    char string[] = "a sample string";
    cout << "The original string: "<< string << endl;
    convertToUpperCase(string);
    cout << "The modified string: " << string << endl;;
}

/* convert string to uppercase letters */
void convertToUpperCase(char *sPtr)
{
    while (*sPtr != '\0')  /* while current character is not '\0' */
    {
        if (islower(*sPtr))  /* if character is lowercase */
        {
            *sPtr = toupper(*sPtr); /* convert to uppercase */
        }
        ++sPtr; /* move sPtr to the next character */
    }
}
