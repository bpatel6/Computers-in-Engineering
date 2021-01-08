//
// Created by Suku on 4/25/2019.
//
#include <ostream>

using namespace std;

#ifndef HW8_DATE_H
#define HW8_DATE_H

class Date {
public:
    // Number of months in a year
    static const int monthsPerYear = 12;
    // Constructor
    explicit Date(int m = 1, int d = 1, int y = 1990);
    // Print date
    void print() const;
    // Gets month from date obj.
    int getMonth() const {
        return month;
    }
    // Gets day from date obj.
    int getDay() const {
        return day;
    }
    // Gets year from date obj.
    int getYear() const {
        return year;
    }
    // Output stream to print
    friend ostream &operator<<(ostream &os, const Date &date);
    // Destructor
    ~Date();

private:
    int month;
    int day;
    int year;
    int checkDay(int testDay) const;
};

// Constructor confirms proper value for month
// Calls utility fun. checkday to confirm proper val. of day
Date::Date(int m, int d, int y) {
    if (m > 0 && m <= monthsPerYear) {
        month = m;
    } else {
        month = 1;
        cout << "Invalid month (" << m << ") set to 1. \n";
    }

    year = y;
    day = checkDay(d);

/*    cout << "Date Created ";
    print();
    cout << endl;*/

}

// Utility function to confirm proper dat value based on month and year, handles leap years too
int Date::checkDay(int testDay) const {
    static const int dayPerMonth[monthsPerYear + 1]{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (testDay > 0 && testDay <= dayPerMonth[month]) {
        return testDay;
    }
    if (month == 2 && testDay == 29 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))) {
        return testDay;
    }
    cout << "Invalid day (" << testDay << ") set to 1.\n";
    return 1;
}

// Prints date obj. in form mm/dd/yyyy
void Date::print() const {
    cout << month << "/" << day << "/" << year;
}

// Destructor
Date::~Date(){
    /*cout << "Date Cleared ";
    print();
    cout << endl;*/
}

// Output stream friend func.
ostream &operator<<(ostream &os, const Date &date) {
    os << date.month << "/" << date.day << "/" << date.year;
    return os;
}


#endif //HW8_DATE_H
