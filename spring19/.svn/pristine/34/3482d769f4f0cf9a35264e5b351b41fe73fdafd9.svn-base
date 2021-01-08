#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("data.txt");
    if (fin.fail()){
        cout << "File data.txt failed to open." << endl;
        return -1;
    }

    // Count the number of elements in the file
    int count = 0;
    double value = 0;
    fin >> value;

    while (fin.good()){
        count ++;
        fin >> value;
    }

    // Dynamic allocate data array
    auto data = new double[count];
    if (data == nullptr){
        cout << "Couldn't allocate memory" << endl;
        return -2;
    }

    // Reset file stream to point oo the start of the file
    fin.clear(); // Clears EOF flag
    fin.seekg(0, fin.beg);


    // Read numbers into data array
    for (int i=0; i<count; i++){
        fin >> data[i];
    }

    for (int i=0; i<count; i++){
        cout << data[i] << endl;
    }

    // Release memory and close file
    delete [] data;
    fin.close();
    return 0;
}