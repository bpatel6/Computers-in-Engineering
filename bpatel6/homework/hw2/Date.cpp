//
// Created by Suku on 2/1/2019.
//
#include <iostream>
#include <cmath>
#include "Date.h"
using namespace std;
const long long int msPerDay = 86400000;

Date::Date(int year, int month, int day, int hour, int minute, int second, int ms) {
    setDate(year, month, day, hour, minute, second, ms);
}
////////////////
// Input: long long int - t since 1970/1/1 in msPerDay
// Description: computes the msPerDay since 1970/1/1 to given input ex:1971/1/1 = 31536000000
// Output: long long int - t
////////////////
long long int Date::getTime() const {
    return m_time;
}

void Date::setTime(long long int t) {
    m_time = t;
}
////////////////
// Input: int day in range 1 to 31
// Description: computes how many days since 1970/1/1 to given input ex:1971/1/1 = 365
// Output: int day
////////////////
int Date::getDay() const {
    long long int t = getTime();
    return static_cast<int>(t/msPerDay);
}

void Date::setDay(int day) {
    long long int t = day*msPerDay;
    m_time = t;
}
///////////////
// Description: The time since 1/1/1970
// Inputs: long long int - number of ms since 1/1/1970
// Outputs: Remainder is the time since 1/1/1970
///////////////
int Date::TimeWithinDay() const {
    long long int t = getTime();
    int time;
    time = static_cast<int>(floor(t % msPerDay));
    if (time < 0){
        time += msPerDay;
    }
    return time;
}
///////////////
// Description: Calculate year from given time - t
// Inputs: long long int t - number since 1/1/1970
// Outputs: int # a year 4 digit number
///////////////
int Date::getYear() const {
    int y = 1970;
    long long int t = getTime();
    while (t > TimeFromYear(y)){
        y++;
    }
    while (t < TimeFromYear(y)){
        y--;
    }
    return y;
}
///////////////
// Description: Checks if given times from leap year or not
// Inputs: long long int t - number since 1/1/1970
// Outputs: int # - 0 or 1, 0 for 365-days and 1 for 366-days
///////////////
int Date::InLeapYear() const {
    int y = getYear();
    if (DaysInYear(y) == 365){
        return 0;
    }
    else if (DaysInYear(y) == 366){
        return 1;
    }
}
///////////////
// Description: Computes the day within a year, what day is it in year
// Inputs: long long int t - number since 1/1/1970
// Outputs: int # which tells what day is it from a time
///////////////
int Date::DaysWithinYear() const {
    long long int t = getTime();
    int y = getYear();
    auto day = static_cast<int>(floor(t / msPerDay));
    return (day-DayFromYear(y));
}
///////////////
// Description: Computes month from the time
// Inputs: long long int t - number since 1/1/1970
// Outputs: int # which tells what month it is from a time month ranges from (0-11) 0=Jan, 11=Dec
///////////////
int Date::getMonth() const {
    int day = DaysWithinYear();
    if (0 <= day && day < 31){
        return 1;
    }
    else if (31 <= day && day < 59 + InLeapYear()){
        return 2;
    }
    else if (59 + InLeapYear() <= day && day < 90 + InLeapYear()){
        return 3;
    }
    else if (90 + InLeapYear() <= day && day < 120 + InLeapYear()){
        return 4;
    }
    else if (120 + InLeapYear() <= day && day < 151 + InLeapYear()){
        return 5;
    }
    else if (151 + InLeapYear() <= day && day < 181 + InLeapYear()){
        return 6;
    }
    else if (181 + InLeapYear() <= day && day < 212 + InLeapYear()){
        return 7;
    }
    else if (212 + InLeapYear() <= day && day < 243 + InLeapYear()){
        return 8;
    }
    else if (243 + InLeapYear() <= day && day < 273 + InLeapYear()){
        return 9;
    }
    else if (273 + InLeapYear() <= day && day < 304 + InLeapYear()){
        return 10;
    }
    else if (304 + InLeapYear() <= day && day < 334 + InLeapYear()){
        return 11;
    }
    else if (334 + InLeapYear() <= day && day < 365 + InLeapYear()){
        return 12;
    }
}
///////////////
// Description: Computes date from time
// Inputs: long long int t - number since 1/1/1970
// Outputs: int # - which is a date range from (1,31)
///////////////
int Date::getDate() const {
    int month = getMonth();
    if (month == 1){
        return DaysWithinYear()+1;
    }
    else if (month == 2){
        return DaysWithinYear()-30;
    }
    else if (month == 3){
        return DaysWithinYear()-58-InLeapYear();
    }
    else if (month == 4){
        return DaysWithinYear()-89-InLeapYear();
    }
    else if (month == 5){
        return DaysWithinYear()-119-InLeapYear();
    }
    else if (month == 6){
        return DaysWithinYear()-150-InLeapYear();
    }
    else if (month == 7){
        return DaysWithinYear()-180-InLeapYear();
    }
    else if (month == 8){
        return DaysWithinYear()-211-InLeapYear();
    }
    else if (month == 9){
        return DaysWithinYear()-242-InLeapYear();
    }
    else if (month == 10){
        return DaysWithinYear()-272-InLeapYear();
    }
    else if (month == 11){
        return DaysWithinYear()-303-InLeapYear();
    }
    else if (month == 12){
        return DaysWithinYear()-333-InLeapYear();
    }
}
///////////////
// Description: Computes hour from time
// Inputs: long long int t - number since 1/1/1970
// Outputs: int # - which is an hour in range 0-23
///////////////
int Date::getHour() const {
    long long int t = getTime();
    return static_cast<int>(floor((t / 3600000) % 24));
}
///////////////
// Description: Computes minute from time
// Inputs: long long int t - number since 1/1/1970
// Outputs: int # - which is an minute in range 0-59
///////////////
int Date::getminute() const {
    long long int t = getTime();
    return static_cast<int>(floor((t / 60000) % 60));
}
///////////////
// Description: Computes seconds from time
// Inputs: long long int t - number since 1/1/1970
// Outputs: int # - which is a seconds in range 0-59
///////////////
int Date::getSeconds() const {
    long long int t = getTime();
    return static_cast<int>(floor((t / 1000) % 60));
}
///////////////
// Description: Computes milli seconds from time
// Inputs: long long int t - number since 1/1/1970
// Outputs: int # - which is a milli second in range 0-999
///////////////
int Date::getMs() const {
    long long int t = getTime();
    return static_cast<int>(floor(t % 1000));
}
///////////////
//Description: Helper print function to print year, month, day, hour, minute, second, ms
//////////////
void Date::print() {
    cout << getYear() << "-" << getMonth() << "-" << getDate() << " T " << getHour() << ":" << getminute() << ":" << getSeconds() << ":" << getMs() << endl;
}
//////////////
// Description: Computes the time based on input date and time and set it equals to m_time
// Inputs: Year, month, day, hour, minute, second, ms
// Outputs: computes the time based on input and set it equals to m_time
//////////////
void Date::setDate(int year, int month, int day, int hour, int minute, int second, int ms) {
// Checks if input month is in range of 1-12; otherwise sets month=1
    if (month < 1 || month > 12){
        month = 1;
    }
// Checks if input day is in range of 1-31 for month 1, 3, 5, 7, 8, 10, 12; otherwise sets day = 1
    if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        && (day < 1 || day > 31)){
        day = 1;
    }
// Checks if input day is in range of 1-30 for month 4, 6, 9, 11; otherwise sets day=1
    else if ((month == 4 || month == 6 || month == 9 || month == 11) && (day < 1 || day > 30)){
        day = 1;
    }
// Checks if input day is in range of 1-29 for month 2; otherwise sets day=1
    else if ((month == 2) && (day < 1 || day > 29)){
        day = 1;
    }
// Description: computes the total day for input month
// input: int number which is a month
// Output: int number of days in total from all the months
    int m = month;
    int new_m = 0;
    for (int i=1; i < m; i++) {
        if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
            new_m += 31;
        }
        else if (m == 4 || m == 6 || m == 9 || m == 11) {
            new_m += 30;
        }
        else if (m == 2) {
            new_m += 28 + DayFromYear(year) - 365;
        }
    }

// Computes long long int, time from year
    const long long int y = TimeFromYear(year);
// Computes long long int, time from day
    const long long int d = day*msPerDay;
// Computes long long int, time from month
    const long long int monthtime = new_m * msPerDay;
// Computes long long int, time from hour
    const long long int hr = hour * 3600000;
// Computes long long int, time from minute
    const long long int min = minute * 60000;
// Computes long long int, time from second
    const long long int sec = second * 1000;
// Assign ms to constant long long int milli
    const long long int milli = ms;
// Adds up all the time from year, month, day, hour, minute, second, ms
    long long int total =  y + monthtime + d + hr + min + sec + milli;
// set the total time
    setTime(total);
}
///////////////
// Description: Calculates how many days are in a year
// Inputs: int - y which is a year
// Outputs: int # which is the days either 365 or 366
///////////////
int DayFromYear(int y){
    return static_cast<int>((365*(y - 1970)) + floor((y - 1969)/4) - floor((y - 1901)/100) + floor((y - 1601)/400));
}
///////////////
// Description: Calculates day since 1/1/1970
// Inputs: int - y which is year
// Outputs: int # which is, what day it is since 1/1/1970
///////////////
long long int TimeFromYear(int y){
    return (msPerDay * DayFromYear(y));
}
///////////////
// Description: Calculates time since 1/1/1970 as msperday
// Inputs: int - y which is year
// Outputs: int # which is, what is the time since 1/1/1970 to input year ex: 1/1/yyyy
///////////////
int DaysInYear(int y){
    if (y%4 != 0) {
        return 365;
    }
    else if (y%4 == 0 && y%100 != 0){
        return 366;
    }
    else if (y%100 == 0 && y%400 != 0){
        return 365;
    }
    else if (y%400 == 0){
        return 366;
    }
}