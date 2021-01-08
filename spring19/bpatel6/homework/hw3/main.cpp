#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include "Date.h"
int count = 0;                  // Initialize count variable to 0
std::string line;               // Initialize string line
std::string date[CHAR_MAX];     // Initialize string date with max size characters
int main() {
    // Attempt to open file
    std::ifstream fin("birthdays.txt");
    // Error: if file doesn't open
    if (fin.fail()){
        std::cerr << "File birthdays.txt failed to open." << std::endl;
        return -1;
    }
    // continue if file opens correctly
    else if (fin.is_open()) {
        std::cout << "File birthdays.txt opened successfully" << std::endl;
        int i = 0;
        // gets/read file from file
        fin >> line;
        // method for checking for EOF
        while (fin.good()) {
            date[i] = line;                        // Store line into a string array named date
            count += 1;                            // Store how many lines are read from the file
            fin >> line;
            i++;
        }
    }
    // closes file
    fin.close();
    // Initialize an array age based on the size of the file
    int age[count];
    // Loop to go over all the element of the array date
    for (int i=0; i < count; i++) {
        int y = 0;
        int m = 0;
        int d = 0;
        // stoi convert string of char into int and substr get rid of symbol such as "-" that is in the string
        y = std::stoi(date[i].substr(0,4));
        m = std::stoi(date[i].substr(5,2));
        d = std::stoi(date[i].substr(8,2));
        const Date D;
        //  Gets the age based on the given year, month and day with respect to 2/15/2019
        age[i] = D.getAge(y, m, d);
    }

    // Following for loop calculates the sum and average
    double sum = 0;
    double average = 0;
    for (int i = 0; i < count; i++) {
        sum += age[i];
    }
    average = sum/count;
    // Prints the average
    std::cout << "Average = " << average << std::endl;

    // Following for loop calculates the standard deviation
    // sum is re-initialize to 0 to calculate sum for standard deviation
    sum = 0;
    for (int i = 0; i<count; i++){
        sum += (age[i] - average)*(age[i] - average);
    }
    double std_deviation = sqrt(sum/(count - 1));
    // Prints the standard deviation
    std::cout << "Standard Deviation = " << std_deviation << std::endl;

    // Following for loop calculates the min and max age of the person and get it array indexes to display the date
    int max = age[0];
    int min = age[0];
    int max_index = 0;
    int min_index = 0;
    for (int i = 0; i < count; i++){
        if (age[i] > max){
            max = age[i];
            max_index = i;
        }
        if (age[i] < min ){
            min = age[i];
            min_index = i;
        }
    }

    // Prints the min and max individual age and date of birth
    std::cout << "Youngest individual age is = " << min << " and the birthday is = " << date[min_index] << std::endl;
    std::cout << "Oldest individual age is = " << max << " and the birthday is = " << date[max_index] << std::endl;
    return 0;
}

