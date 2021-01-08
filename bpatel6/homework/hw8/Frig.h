//
// Created by Suku on 4/25/2019.
//
using namespace std;
#include <list>
#include <iostream>
#include "Food.h"
#include "Date.h"
#include <iomanip>
#ifndef HW8_FRIG_H
#define HW8_FRIG_H

class Frig {
public:

    // Adds item to the list produce
    // Input: sting name, int count, month, day, year
    // Output: Adds new food obj. to the list produce
    void additem(string name = "nothing", int count = 1, int month = 1, int day = 1, int year = 2020) {
        produce.push_back(new Food(name, count, month, day, year));
    }

    // Sets the current day by using the date obj.
    void setCurrentDay(const Date &date) {
        Frig::currentDay = date;
    }

    // Prints the frig. contents
    void printfrigcontent() const {
        cout << "ITEMS IN THE FRIG" << endl;
        for (auto it : produce) {
            cout << *it << endl;
        }
    }

    // Prints the expired frig. contents
    void printexpiredcontent() const {
        cout << "EXPIRED ITEMS IN THE FRIG" << endl;
        for (auto it : produce) {
            if (it->isExpired(currentDay) == 0) {
                cout << *it << endl;
            }
        }
    }

    // Output stream friend func.
    friend ostream &operator<<(ostream &os, const Frig &frig) {
        for (auto i : frig.produce)
            os << "produce: " << frig;
        return os;
    }

    // Remove item from the list produce
    // Input: string name, int count
    // Output: Remove the food obj. if count goes to 0 otherwise subtracts the inputcount from obj. count
    void removeitem(const string &inputname, int inputcount) {
        for (auto i = produce.begin(); i != produce.end();) {
            Food *e = *i;
            if (e->getName() == inputname) {
                int new_count = e->getCount() - inputcount;
                e->setCount(new_count);
            }
            if (e->getCount() == 0) {
                i = produce.erase(i);
                delete e;
            } else {
                i++;
            }
        }
    }

private:
    list<Food *> produce;
    Date currentDay;
};


#endif //HW8_FRIG_H
