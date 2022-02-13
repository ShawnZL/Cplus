//
// Created by Shawn on 2022/2/13.
//
#include <iostream>
extern double warming; //use warming from another file

void update(double dt);
void local();
using std::cout;

void update(double dt) {
    extern double warming; //optional redeclaration
    warming += dt;
    cout << "Updating global warming to " << warming;
    cout << " degrees.\n";
}

void local() {
    double warming = 0.8; //new variable hides external one
    cout << "Local warming = " << warming << " degrees.\n";
    // Access global variable with the
    cout << "But global warming = " << ::warming;
    cout << " degrees.\n";
}

