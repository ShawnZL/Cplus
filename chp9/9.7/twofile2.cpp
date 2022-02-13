//
// Created by Shawn on 2022/2/13.
//
#include <iostream>
extern int tom;
static int dick = 10;
int harry = 200; //external variable definition, no conflict with twofile1 harry

void remote_access() {
    using namespace std;
    cout << "main() reports the following addresses:\n";
    cout << &tom << " = &tom, " << &dick << " = &dick, ";
    cout << &harry << " = &harry\n";
}