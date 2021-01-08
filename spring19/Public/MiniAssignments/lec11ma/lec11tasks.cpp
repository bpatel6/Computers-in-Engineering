//
// Created by Johnson, Hans J on 5/17/17.
// Modified by Gary E Christensen on 2/17/19.
//

#include "lec11tasks.h"


void print_values_0(const int *const a) {
    cout << "Fix the order of data processing " << endl;
    size_t i_ind = 4;

    const int *const four = &(*(a + 3));
    const int *const three = &(a[i_ind]);
    const int *const two = a + 1;
    const int *const five = &(a[++i_ind]);
    const int *const one = &(a[i_ind++ + 1]);
    const int *const seven = &(a[2]);
    const int *const six = reinterpret_cast<const int *>( reinterpret_cast<const char *>(a) + sizeof(int) * 7 );
    // TODO:  Fix the matching above so that the print statement displays correctly
    /* in the matching above, the values have been scrambled
     * you are only allowed to change the name of the variables in order
     * get the correct printing
     */

    cout << *one << " " << *two << " " << *three << " " << *four << " " << *five
         << " " << *six << " " << *seven << endl;;

}


void print_values_1(const int *const a, const size_t LAST_VALID_ELEMENT) {

    //TODO: Fix so that it prints out "22 33 44 55 66 77 88"
    cout << "LOOP TEST 1" << endl;

    size_t i = 0;
    while (i <= LAST_VALID_ELEMENT) {
        ++i;
        cout << a[i] << " ";
    }
    cout << endl;
}

extern void print_values_2(const int *const a, const size_t LAST_VALID_ELEMENT) {
    //TODO: Fix so that it prints out "22 33 44 55 66 77 88"
    cout << "LOOP TEST 2" << endl;

    size_t i = 2;
    while (i <= LAST_VALID_ELEMENT) {
        cout << a[i++] << " ";
    }
    cout << endl;
}

extern void print_values_3(const int *const a, const size_t LAST_VALID_ELEMENT) {
    //TODO: Fix so that it prints out "22 33 44 55 66 77 88"
    cout << "LOOP TEST 3" << endl;

    size_t i = 1;
    while (i <= LAST_VALID_ELEMENT) {
        cout << a[++i] << " ";
    }
    cout << endl;
}

extern void print_values_4(const int *const a, const size_t LAST_VALID_ELEMENT) {

    //TODO: Fix so that it prints out "22 33 44 55 66 77 88"
    cout << "LOOP TEST 4" << endl;

    size_t i = 1;
    while (i < LAST_VALID_ELEMENT) {
        cout << *(a + i++) << " ";
    }
    cout << endl;
}

extern void print_values_5(const int *const a, const size_t LAST_VALID_ELEMENT) {

    //TODO: Fix so that it prints out "22 33 44 55 66 77 88"
    cout << "LOOP TEST 5" << endl;

    size_t i = 1;
    while (i <= LAST_VALID_ELEMENT) {
        cout << *(a + ++i) << " ";
    }
    cout << endl;
}

extern void print_values_6(const int *const a, const size_t LAST_VALID_ELEMENT) {
    //TODO: Fix so that it prints out "22 33 44 55 66 77 88"
    cout << "LOOP TEST 6" << endl;

    size_t i = 1;
    while (i < LAST_VALID_ELEMENT) {
        const int *const curr_ptr = &(*(&(*(&(*(a + 1))))));
        cout << *curr_ptr << " ";
        ++i;
    }
    cout << endl;
}

extern void print_values_7(const int *const a, const size_t LAST_VALID_ELEMENT) {

    //TODO: Fix so that it prints out "22 33 44 55 66 77 88"
    cout << "LOOP TEST 7" << endl;

    const int *iter = a;
    const int *const end = (a + LAST_VALID_ELEMENT);
    while (iter < end) {
        cout << *(iter++) << " ";
    }
    cout << endl;
}

