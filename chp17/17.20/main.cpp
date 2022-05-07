#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib> // for exit
const int LIM = 20;
inline void eatline() { while (std::cin.get() != '\n') continue; }

struct planet {
    char name[20]; // name of planet
    double population; // its population
    double g; // its acceleration of gravity
};

const char * file = "planets.dat";

int main() {
    using namespace std;
    planet pl;
    cout << fixed << right; // 混合右对齐

    // show initial contents
    fstream finout;
    finout.open(file, ios_base::in | ios_base::out | ios_base::binary ); // binary file
    int ct = 0;
    // note:some system don`t accept the ios_base::binary mode
    if (finout.is_open()) {
        finout.seekg(0); // go to beginning
        cout << "Here are the current contents of the "
             << file << " file:\n";
        while (finout.read((char *) & pl, sizeof pl)) {
            cout << setw(20) << pl.name << ": "
                 << setprecision(0) << setw(12) << pl.population
                 << setprecision(2) << setw(6) << pl.g <<endl;
        }
        if (finout.eof())
            finout.clear(); // clear eof flag
        else {
            cerr << "Error in reading " << file << ".\n";
            exit(EXIT_FAILURE);
        }
    }
    else {
        cout << file << " could not be opened -- bye.\n";
        exit(EXIT_FAILURE);
    }
    // change a record
    cout << "Enter the record number you wish to change:";
    long rec;
    cin >> rec;
    eatline();
    if (rec < 0 || rec >= ct) {
        cerr << "Invalid record number -- bye\n";
        exit(EXIT_FAILURE);
    }
    streampos place = rec * sizeof pl; // convert to streampos type
    finout.seekg(place); // random access
    if (finout.fail()) {
        cerr << "Error on attempted seek\n";
        exit(EXIT_FAILURE);
    }

    finout.read((char *) &pl, sizeof pl);
    cout << "Your selection:\n";
    cout << rec << ": " << setw(LIM) << pl.name << ": "
        << setprecision(0) << setw(12) << pl.population
        << setprecision(2) << setw(6) << pl.g << endl;

    if (finout.eof())
        finout.clear(); // clear eof flag

    cout << "Enter planet name:";
    cin.get(pl.name, LIM);
    eatline();
    cout << "Enter planet`s acceleration of gravity:";
    cin >> pl.population;
    cout << "Enter planet`s acceleration of gravity: ";
    cin >> pl.g;
    finout.seekg(place); // go back
    finout.write((char *) & pl, sizeof pl) << flush;
    if (finout.fail()) {
        cerr << "Error on attempted write\n";
        exit(EXIT_FAILURE);
    }

    ct = 0;
    finout.seekg(0); // go to beginning of file
    cout << "Here are the new contents of the " << file
        << "file:\n";
    while (finout.read((char *) & pl, sizeof pl)) {
        cout << ct++ << ": " << setw(LIM) << pl.name << ": "
        << setprecision(0) << setw(12) << pl.population
        << setprecision(2) << setw(6) << pl.g <<endl;
    }
    finout.close();
    cout << "Done.\n";
    return 0;
}
