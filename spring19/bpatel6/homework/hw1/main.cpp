//Name: Bhavik Patel
//Date: 01/18/2019
//Description: Homework Assignment 1
#include <iostream>
#include <cmath>
using namespace std;
int Day(long long int t);
int TimeWithinDay(long long int t);
int DaysInYear(int y);
int DayFromYear(int y);
long long int TimeFromYear (int y);
int YearFromTime(long long int t);
int InLeapYear(long long int t);
int DayWithinYear(long long int t);
int MonthFromTime(long long int t);
int DateFromTime(long long int t);
char PrintTheDateAndTime(long long int t);
const long long int msPerDay = 86400000;
int main(){
    cout << "Day(0) should be day 0: result is " << Day(0) << endl;
    cout << "Day(-1) should be day -1: result is " << Day(-1) << endl;
    cout << "Day(msPerDay) should be day 1: result is " << Day(msPerDay) << endl;
    cout << "Day(5*msPerDay) should be day 5: result is " << Day(5*msPerDay) << endl;
    cout << "TimeWithinDay(msPerDay) should be 0: result is " << TimeWithinDay(msPerDay) << endl;
    cout << "TimeWithinDay(-1) should be 86399999: result is " << TimeWithinDay(-1)<< endl;
    cout << "TimeWithinDay(1.9*msPerDay) should be 77760000: result is " << TimeWithinDay(1.9*msPerDay)<< endl;
    cout << "TimeWithinDay(2*msPerDay) should be 0: result is " << TimeWithinDay(2*msPerDay)<< endl;
    cout << "Daysinyear(1970) should be 365: result is " << DaysInYear(1970) << endl;
    cout << "Daysinyear(1972) should be 366: result is " << DaysInYear(1972) << endl;
    cout << "Daysinyear(1969) should be 365: result is " << DaysInYear(1969) << endl;
    cout << "Daysinyear(2020) should be 366: result is " << DaysInYear(2020) << endl;
    cout << "Dayfromyear(1969) should be -365: result is " << DayFromYear(1969) << endl;
    cout << "Dayfromyear(1976) should be 2191: result is " << DayFromYear(1976) << endl;
    cout << "Dayfromyear(2018) should be 17532: result is " << DayFromYear(2018) << endl;
    cout << "Dayfromyear(2019) should be 17897: result is " << DayFromYear(2019) << endl;
    cout << "Timefromyear(1970) should be 0: result is " << TimeFromYear(1970) << endl;
    cout << "Timefromyear(1969) should be -31536000000: result is " << TimeFromYear(1969) << endl;
    cout << "Timefromyear(1971) should be 31536000000: result is  " << TimeFromYear(1971) << endl;
    cout << "Timefromyear(1972) should be 63072000000: result is " << TimeFromYear(1972) << endl;
    cout << "Yearfromtime(3*365*msPerDay) should be 1972: result is " << YearFromTime(3*365*msPerDay) << endl;
    cout << "Yearfromtime(msPerDay) should be 1970: result is " << YearFromTime(msPerDay) << endl;
    cout << "Yearfromtime(-1*msPerDay) should be 1969: result is " << YearFromTime(-1*msPerDay) << endl;
    cout << "Yearfromtime(2*365*msPerDay) should be 1972: result is " << YearFromTime(2*365*msPerDay) << endl;
    cout << "InLeapYear(msPerDay) should be 0: result is " << InLeapYear(msPerDay) << endl;
    cout << "InLeapYear(2*365*msPerDay) should be 1: result is " << InLeapYear(2*365*msPerDay) << endl;
    cout << "InLeapYear(-1*msPerDay) should be 0: result is " << InLeapYear(-1*msPerDay) << endl;
    cout << "InLeapYear(3*365*msPerDay) should be 1: result is "<< InLeapYear(3*365*msPerDay) << endl;
    cout << "Daywithinyear(msPerDay) should be 1: result is " << DayWithinYear(msPerDay) << endl;
    cout << "Daywithinyear(366*msPerDay) should be 1: result is " << DayWithinYear(366*msPerDay) << endl;
    cout << "Daywithinyear(365*msPerDay) should be 0: result is " << DayWithinYear(365*msPerDay) << endl;
    cout << "Daywithinyear(-1*msPerDay) should be 364: result is " << DayWithinYear(-1*msPerDay) << endl;
    cout << "Monthfromtime(30*msPerDay) should be 0: result is " << MonthFromTime(30*msPerDay) << endl;
    cout << "Monthfromtime(50*msPerDay) should be 1: result is " << MonthFromTime(50*msPerDay) << endl;
    cout << "Monthfromtime(364*msPerDay) should be 11: result is " << MonthFromTime(364*msPerDay) << endl;
    cout << "Monthfromtime(95*msPerDay) should be 3: result is " << MonthFromTime(95*msPerDay) << endl;
    cout << "Datefromtime(0) should be 1: result is " << DateFromTime(0) << endl;
    cout << "Datefromtime(-1*msPerDay) should be 31: result is " << DateFromTime(-1*msPerDay) << endl;
    cout << "Datefromtime(2*365*msPerDay) should be 1: result is " << DateFromTime(2*365*msPerDay) << endl;
    cout << "Datefromtime(365*msPerDay) should be 1: result is " << DateFromTime(365*msPerDay) << endl;
    cout << "PrintTheDateAndTime(0) should be 1970-1-1: result is " << PrintTheDateAndTime(0) << endl;
    cout << "PrintTheDateAndTime(msPerDay) should be 1970-1-2: result is " << PrintTheDateAndTime(msPerDay) << endl;
    cout << "PrintTheDataAndTime(31*msPerDay) should be 1970-2-1: result is " << PrintTheDateAndTime(31*msPerDay) << endl;
    cout << "PrintTheDataAndTime(-1) should be 1969-12-31: result is " << PrintTheDateAndTime(-1) << endl;
    cout << "PrintTheDataAndTime(2.5*msPerDay) should be 1970-1-3: result is " << PrintTheDateAndTime(2.5*msPerDay) << endl;
    return 0;
}
////////////////
// Description: The number of days since 1/1/1970
// Inputs: long long int - number of ms since 1/1/1970
// Outputs: int - number of days since since 1/1/1970
////////////////
int Day(long long int t){
    return static_cast<int>(floor(static_cast<double>(t)/msPerDay));
}

///////////////
// Description: The time since 1/1/1970
// Inputs: long long int - number of ms since 1/1/1970
// Outputs: Remainder is the time since 1/1/1970
///////////////
int TimeWithinDay(long long int t){
    int time;
    time = static_cast<int>(floor(t % msPerDay));
    if (time < 0){
        time += msPerDay;
    }
    return time;
}

///////////////
// Description: Calculates how many days are in a year
// Inputs: int - y which is a year
// Outputs: int # which is the days either 365 or 366
///////////////
int DaysInYear(int y){
    if (y%4 != 0){
        return 365;
    }
    else if (y%4 == 0 and y%100 != 0){
        return 366;
    }
    else if (y%100 == 0 and y%400 != 0){
        return 365;
    }
    else if (y%400 == 0){
        return 366;
    }
}

///////////////
// Description: Calculates day since 1/1/1970
// Inputs: int - y which is year
// Outputs: int # which is, what day it is since 1/1/1970
///////////////
int DayFromYear(int y){
    return static_cast<int>((365 * (y - 1970)) + floor((y - 1969) / 4) - floor((y - 1901) / 100) + floor((y - 1601) / 400));
}

///////////////
// Description: Calculates time since 1/1/1970 as msperday
// Inputs: int - y which is year
// Outputs: int # which is, what is the time since 1/1/1970 to input year ex: 1/1/yyyy
///////////////
long long int TimeFromYear (int y){
    return static_cast<long long int>(msPerDay * DayFromYear(y));
}

///////////////
// Description: Calculate year from given time - t
// Inputs: long long int t - number since 1/1/1970
// Outputs: int # a year 4 digit number
///////////////
int YearFromTime(long long int t){
    double y;
    y = floor(t / (msPerDay * 365)) + 1970;
    double new_t = TimeFromYear(y);
    if (new_t > t){
        y--;
    }

    else if (new_t + (msPerDay * DaysInYear(y)) <= t){
            y++;
        }
    return static_cast<int>(y);
}

///////////////
// Description: Checks if given times from leap year or not
// Inputs: long long int t - number since 1/1/1970
// Outputs: int # - 0 or 1, 0 for 365-days and 1 for 366-days
///////////////
int InLeapYear(long long int t){
    if (DaysInYear(YearFromTime(t)) == 365){
        return 0;
    }

    else if (DaysInYear(YearFromTime(t)) == 366){
        return 1;
    }
}

///////////////
// Description: Computes the day within a year, what day is it in year
// Inputs: long long int t - number since 1/1/1970
// Outputs: int # which tells what day is it from a time
///////////////
int DayWithinYear(long long int t){
    return (Day(t)-DayFromYear(YearFromTime(t)));
}

///////////////
// Description: Computes month from the time
// Inputs: long long int t - number since 1/1/1970
// Outputs: int # which tells what month it is from a time month ranges from (0-11) 0=Jan, 11=Dec
///////////////
int MonthFromTime(long long int t){
    int day = DayWithinYear(t);
    if (0 <= day and day < 31){
        return 0;
    }
    else if (31 <= day and day < 59+InLeapYear(t)){
        return 1;
    }
    else if (59+InLeapYear(t) <= day and day < 90+InLeapYear(t)){
        return 2;
    }
    else if (90+InLeapYear(t) <= day and day < 120+InLeapYear(t)){
        return 3;
    }
    else if (120+InLeapYear(t) <= day and day < 151+InLeapYear(t)){
        return 4;
    }
    else if (151+InLeapYear(t) <= day and day < 181+InLeapYear(t)){
        return 5;
    }
    else if (181+InLeapYear(t) <= day and day < 212+InLeapYear(t)){
        return 6;
    }
    else if (212+InLeapYear(t) <= day and day < 243+InLeapYear(t)){
        return 7;
    }
    else if (243+InLeapYear(t) <= day and day < 273+InLeapYear(t)){
        return 8;
    }
    else if (273+InLeapYear(t) <= day and day < 304+InLeapYear(t)){
        return 9;
    }
    else if (304+InLeapYear(t) <= day and day < 334+InLeapYear(t)){
        return 10;
    }
    else if (334+InLeapYear(t) <= day and day < 365+InLeapYear(t)){
        return 11;
    }
}

///////////////
// Description: Computes date from time
// Inputs: long long int t - number since 1/1/1970
// Outputs: int # - which is a date range from (1,31)
///////////////
int DateFromTime(long long int t){
    if (MonthFromTime(t) == 0){
        return DayWithinYear(t)+1;
    }
    else if (MonthFromTime(t) == 1){
        return DayWithinYear(t)-30;
    }
    else if (MonthFromTime(t) == 2){
        return DayWithinYear(t)-58-InLeapYear(t);
    }
    else if (MonthFromTime(t) == 3){
        return DayWithinYear(t)-89-InLeapYear(t);
    }
    else if (MonthFromTime(t) == 4){
        return DayWithinYear(t)-119-InLeapYear(t);
    }
    else if (MonthFromTime(t) == 5){
        return DayWithinYear(t)-150-InLeapYear(t);
    }
    else if (MonthFromTime(t) == 6){
        return DayWithinYear(t)-180-InLeapYear(t);
    }
    else if (MonthFromTime(t) == 7){
        return DayWithinYear(t)-211-InLeapYear(t);
    }
    else if (MonthFromTime(t) == 8){
        return DayWithinYear(t)-242-InLeapYear(t);
    }
    else if (MonthFromTime(t) == 9){
        return DayWithinYear(t)-272-InLeapYear(t);
    }
    else if (MonthFromTime(t) == 10){
        return DayWithinYear(t)-303-InLeapYear(t);
    }
    else if (MonthFromTime(t) == 11){
        return DayWithinYear(t)-333-InLeapYear(t);
    }
}


///////////////
// Description: This function prints out the year, month, date, hour, minuet, second
// Inputs: long long int t - number since 1/1/1970
// Outputs: prints out the year, month, date, hour, minuet, second which depends on the given input
///////////////
char PrintTheDateAndTime(long long int t){
    cout << YearFromTime(t) << "-" << MonthFromTime(t) + 1 << "-" << DateFromTime(t) << " T " << TimeWithinDay(t)/3600000
         << ":" << (TimeWithinDay(t)/60000)/24 << ":" << ((TimeWithinDay(t)/1000)/60)/60 << endl;
}