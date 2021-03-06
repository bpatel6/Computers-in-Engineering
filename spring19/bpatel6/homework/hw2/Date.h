//
// Created by Suku on 2/1/2019.
//

#ifndef HW2_DATE_H
#define HW2_DATE_H

class Date{
public:
    // constructor to initialize year=1970, month=1, day=1, hour=0, minute=0, second=0, ms=0
    explicit Date(int year=1970, int month=1, int day=1, int hour=0, int minute=0, int second=0, int ms=0);

    ////////////////
    // Input: long long int - t since 1970/1/1 in msPerDay
    // Description: computes the msPerDay since 1970/1/1 to given input ex:1971/1/1 = 31536000000
    // Output: long long int - t
    ////////////////
    long long int getTime() const;
    void setTime(long long int t);
    ////////////////
    // Input: int day in range 1 to 31
    // Description: computes how many days since 1970/1/1 to given input ex:1971/1/1 = 365
    // Output: int day
    ////////////////
    int getDay() const;
    void setDay(int day);
    ///////////////
    // Description: The time since 1/1/1970
    // Inputs: long long int - number of ms since 1/1/1970
    // Outputs: Remainder is the time since 1/1/1970
    ///////////////
    int TimeWithinDay() const;
    ///////////////
    // Description: Calculate year from given time - t
    // Inputs: long long int t - number since 1/1/1970
    // Outputs: int # a year 4 digit number
    ///////////////
    int getYear() const;
    ///////////////
    // Description: Checks if given times from leap year or not
    // Inputs: long long int t - number since 1/1/1970
    // Outputs: int # - 0 or 1, 0 for 365-days and 1 for 366-days
    ///////////////
    int InLeapYear() const;
    ///////////////
    // Description: Computes the day within a year, what day is it in year
    // Inputs: long long int t - number since 1/1/1970
    // Outputs: int # which tells what day is it from a time
    ///////////////
    int DaysWithinYear() const;
    ///////////////
    // Description: Computes month from the time
    // Inputs: long long int t - number since 1/1/1970
    // Outputs: int # which tells what month it is from a time month ranges from (0-11) 0=Jan, 11=Dec
    ///////////////
    int getMonth() const;
    ///////////////
    // Description: Computes date from time
    // Inputs: long long int t - number since 1/1/1970
    // Outputs: int # - which is a date range from (1,31)
    ///////////////
    int getDate() const;
    ///////////////
    // Description: Computes hour from time
    // Inputs: long long int t - number since 1/1/1970
    // Outputs: int # - which is an hour
    ///////////////
    int getHour() const;
    ///////////////
    // Description: Computes minute from time
    // Inputs: long long int t - number since 1/1/1970
    // Outputs: int # - which is an minute
    ///////////////
    int getminute() const;
    ///////////////
    // Description: Computes seconds from time
    // Inputs: long long int t - number since 1/1/1970
    // Outputs: int # - which is a seconds
    ///////////////
    int getSeconds() const;
    ///////////////
    // Description: Computes milli seconds from time
    // Inputs: long long int t - number since 1/1/1970
    // Outputs: int # - which is a milli second
    ///////////////
    int getMs() const;
    ///////////////
    // Description: Helper print function to print year, month, day, hour, minute, second, ms
    //////////////
    void print();
    //////////////
    // Description: Computes the time based on input date and time and set it equals to m_time
    // Inputs: Year, month, day, hour, minute, second, ms
    // Outputs: computes the time based on input and set it equals to m_time
    //////////////
    void setDate(int year=1970, int month=1, int day=1, int hour=0, int minute=0, int second=0, int ms=0);

private:
    long long int m_time;
};

///////////////
// Description: Calculates how many days are in a year
// Inputs: int - y which is a year
// Outputs: int # which is the days either 365 or 366
///////////////
extern int DaysInYear(int y);
///////////////
// Description: Calculates day since 1/1/1970
// Inputs: int - y which is year
// Outputs: int # which is, what day it is since 1/1/1970
///////////////
extern int DayFromYear(int y);
///////////////
// Description: Calculates time since 1/1/1970 as msperday
// Inputs: int - y which is year
// Outputs: int # which is, what is the time since 1/1/1970 to input year ex: 1/1/yyyy
///////////////
extern long long int TimeFromYear(int y);

#endif //HW2_DATE_H
