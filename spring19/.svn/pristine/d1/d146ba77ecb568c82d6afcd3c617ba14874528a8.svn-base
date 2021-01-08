//
// Created by Suku on 4/25/2019.
//
#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

#ifndef HW8_FOOD_H
#define HW8_FOOD_H

class Food {
public:
    // Constructor
    // Input: string name, int count, month, day, year
    // Output: Creates a food object
    explicit Food(string nameFood = "Nothing", int count = 1, int month = 1, int day = 1, int year = 2020) : name{
            nameFood}, count{count}, expireDate{Date(month, day, year)} {
    };

    // Validates if food is expired return true, otherwise false
    // Note: Validate statement are reversed but works as it needs too
    bool isExpired(const Date &D) {
        if (D.getMonth() >= expireDate.getMonth() && D.getDay() >= expireDate.getDay() &&
            D.getYear() >= expireDate.getYear()) {
            return false;
        } else {
            return true;
        }
    }


    // Sets the member variable count
    // Input: int i
    // Output: Sets count = i;
    void setCount(int i) {
        Food::count = i;
    }

    // Returns the name of obj.
    const string &getName() const {
        return name;
    }

    // Returns the count of obj.
    int getCount() const {
        return count;
    }

    // Output stream friend func.
    friend ostream &operator<<(ostream &os, const Food &food) {
        os << "name:" << food.name << " count:" << food.count << " expireDate:" << food.expireDate;
        return os;
    }

private:
    string name;
    int count;
    Date expireDate;
};


#endif //HW8_FOOD_H
