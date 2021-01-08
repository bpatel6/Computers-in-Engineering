// Name: Bhavik Patel
// Date: 02/01/2019
// Description: Homework Assignment 2
#include <iostream>
#include "Date.h"
const long long int msPerDay = 86400000;
using namespace std;
int main() {
    
    Date d1;
    Date d2;
    Date d3;
    Date d4;
    Date d5;
    Date d6;


    d1.setTime(0);
    d2.setTime(1);
    d3.setTime(-1);
    d4.setTime(msPerDay);
    d5.setDate(2018,6,18,17);
    d6.setTime(1529343030000);

    cout << "--------------" << endl;
    cout << "d1.setTime(0).d1.getTime() should return 0. Result is " << d1.getTime() << endl;
    cout << "d2.setTime(1).d2.getTime() should return 1. Result is " << d2.getTime() << endl;
    cout << "d3.setTime(-1).d3.getTime() should return -1. Result is " << d3.getTime() << endl;
    cout << "d4.setTime(msPerDay).d4.getTime() should return 86400000. Result is " << d4.getTime() << endl;

    cout << "--------------" << endl;
    cout << "d1.setTime(0).d1.TimeWithinDay() should return 0. result is " << d1.TimeWithinDay() << endl;
    cout << "d2.setTime(1).d2.TimeWithinDay() should return 1. result is " << d2.TimeWithinDay() << endl;
    cout << "d3.setTime(-1).d3.TimeWithinDay() should return 86399999. result is " << d3.TimeWithinDay() << endl;
    cout << "d4.setTime(msPerDay).d4.TimeWithinDay() should return 0. result is " << d4.TimeWithinDay() << endl;

    d1.setDay(0);
    d2.setDay(1);
    d3.setDay(-1);
    d4.setDay(365);

    cout << "--------------" << endl;
    cout << "d1.setDay(0).d1.getDay() should return 0. Result is " << d1.getDay() << endl;
    cout << "d2.setDay(1).d2.getDay() should return 1. Result is " << d2.getDay() << endl;
    cout << "d3.setDay(-1).d9.getDay() should return -1. Result is " << d3.getDay() << endl;
    cout << "d4.setDay(365).d10.getDay() should return 365. Result is " << d4.getDay() << endl;

    cout << "--------------" << endl;
    cout << "d1.DaysWithinYear() should be 0, result is " << d1.DaysWithinYear() << endl;
    cout << "d2.DaysWithinYear() should be 1, result is " << d2.DaysWithinYear() << endl;
    cout << "d3.DaysWithinYear() should be 364, result is " << d3.DaysWithinYear() << endl;
    cout << "d4.DaysWithinYear() should be 0, result is " << d4.DaysWithinYear() << endl;

    cout << "--------------" << endl;
    cout << "d1.getYear() should be 1970, result is " << d1.getYear() << endl;
    cout << "d2.getYear() should be 1970, result is " << d2.getYear() << endl;
    cout << "d3.getYear() should be 1969, result is " << d3.getYear() << endl;

    cout << "--------------" << endl;
    cout << d1.getTime() << " should be , 1/1/1970 => "; d1.print();
    cout << d2.getTime() << " should be , 1/2/1970 => "; d2.print();
    cout << d5.getTime() << " should be 5pm, 6/18/2018 => "; d5.print();
    cout << d6.getTime() << " should be 5:30:30, 6/18/2018 => "; d6.print();
    return 0;
}