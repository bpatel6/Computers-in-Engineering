// Extra Credit:
// Added menu to interact with Frig class
// Input validation for month day and year
// Default input.txt
// Note: I have commented out the date class cout to make compiler clean
#include <iostream>
#include "Date.h"
#include "Food.h"
#include "Frig.h"
#include <fstream>

using namespace std;
string line;
int a, b, c, d;

int main() {
    Date D1(4, 25, 2019);   // Date obj. created
    Frig f3;    // Frig obj. created
    f3.setCurrentDay(D1); // Frig obj. currentday set

    // Reads in the file and adds item to the frig obj. f3
    ifstream fin("input.txt");
    if (fin.fail()) {
        cerr << "File input.txt failed to open" << endl;
        return -1;
    } else if (fin.is_open()) {
        cout << "File input.txt opened successfully" << endl;
        while (fin >> line >> a >> b >> c >> d) {
            f3.additem(line, a, b, c, d);
        }
    }
    fin.close();

    cout << "Items load from file" << endl;
    f3.printfrigcontent(); // Prints frig f3 contents
    cout << "\n";
    f3.printexpiredcontent();   // Prints frig f3 expired contents
    cout << "\nAdding carrots:100 - 8/5/2019 and apples:50 - 6/6/2019 to the frig" << endl;
    f3.additem("carrots", 100, 8, 5, 2019); // Adds carrots to frig obj.
    f3.additem("apples", 50, 6, 6, 2019);   // Adds apples to frig obj.
    cout << "Removed eggs:12, soda:5, milk:3, apples:20\n" << endl;
    f3.removeitem("eggs", 12);  // Removes egg from frig obj.
    f3.removeitem("soda", 5);   // Removes soda from frig obj.
    f3.removeitem("milk", 3);   // Remove milk from frig obj.
    f3.removeitem("apples", 20);    // Remove apples from frig obj.
    f3.printfrigcontent(); // Re-prints the frig contents


    cout << "///////////////////////////////////////////////////////////////////////" << endl;
    cout << "Extra Credit" << endl;
    Frig home;
    int quit = 0;
    int input, counts, r_count, mn, dy, yr;
    string inputname;
    while (quit != 1) {
        cout << "1. Set the current day" << endl;                   // Let user sets the current date
        cout << "2. Prints item in the frig" << endl;               // Prints the content of frig
        cout << "3. Prints expired item in the frig" << endl;       // Prints expired content of frig
        cout << "4. Add item to the frig" << endl;                  // Add items to frig.
        cout << "5. Remove item from the frig" << endl;             // Remove items from frig
        cout << "6. Quit" << endl;                                  // Ends the program
        cin >> input;
        if (input >= 1 && input <= 6) {
            if (input == 1) {
                cout << "Month:" << endl;
                cin >> input;
                if (input >= 1 && input <= 12) {
                    mn = input;
                } else {
                    cout << "Invalid Input! Month is set to 1" << endl;
                    mn = 1;
                }
                cout << "Day:" << endl;
                cin >> input;
                if (input >= 1 && input <= 31 && mn != 2) {
                    dy = input;
                } else if (input >= 1 && input <= 29 && mn == 2) {
                    dy = input;
                } else {
                    cout << "Invalid Input! Day is set to 1" << endl;
                    dy = 1;
                }
                cout << "Year:" << endl;
                cin >> input;
                if (input >= 1990 && input <= 3000) {
                    yr = input;
                } else {
                    cout << "Invalid Input! Year is set to 1990" << endl;
                    yr = 1990;
                }
                home.setCurrentDay(Date(mn, dy, yr));
            }
            if (input == 2) {
                home.printfrigcontent();
            }
            if (input == 3) {
                home.printexpiredcontent();
            }
            if (input == 4) {
                cout << "Name:";
                cin >> inputname;
                cout << "Count:";
                cin >> input;
                counts = input;
                cout << "Month:";
                cin >> input;
                if (input >= 1 && input <= 12) {
                    mn = input;
                } else {
                    cout << "Invalid Input! Month is set to 1" << endl;
                    mn = 1;
                }
                cout << "Day:";
                cin >> input;
                if (input >= 1 && input <= 31 && mn != 2) {
                    dy = input;
                } else if (input >= 1 && input <= 29 && mn == 2) {
                    dy = input;
                } else {
                    cout << "Invalid Input! Day is set to 1" << endl;
                    dy = 1;
                }
                cout << "Year:";
                cin >> input;
                if (input >= 1990 && input <= 3000) {
                    yr = input;
                } else {
                    cout << "Invalid Input! Year is set to 1990" << endl;
                    yr = 1990;
                }
                home.additem(inputname, counts, mn, dy, yr);
            }
            if (input == 5) {
                cout << "Name:";
                cin >> inputname;
                cout << "Count:";
                cin >> input;
                r_count = input;
                home.removeitem(inputname, r_count);
            }
            if (input == 6) {
                quit = 1;
            }
        } else {
            cout << "Invalid Input" << endl;
        }
    }
    return 0;
}