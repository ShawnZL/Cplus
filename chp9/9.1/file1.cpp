#include <iostream>
#include "coordin.h" // structure templates, function prototypes
using namespace std;
int main() {
    rect rplace;
    polar pplace;

    cout << "Enter the x and y values:\n";
    while (cin >> rplace.x >> rplace.y) {//slick use of cin
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout << "Next two number (q ot quit):\n";
    }
    cout << "Bye!\n";
    return 0;
}
