#include <iostream>
#include "mytime2.h"
int main() {
    using std::cout;
    using std::endl;
    Time planning;
    Time coding(2, 40);
    Time fixing(5, 35);
    Time total, diff, adjusted;
    cout << "planning time = ";
    planning.Show();
    cout << endl;

    cout << "coding time = ";
    coding.Show();
    cout << endl;

    cout << "fixing time = ";
    fixing.Show();
    cout << endl;

    total = coding + fixing;
    cout << "coding + fixing = ";
    total.Show();
    cout << endl;

    diff = fixing - coding;
    cout << "fixing - coding = ";
    diff.Show();
    cout << endl;

    adjusted = total * 1.5;
    cout << "total * 1.5 = ";
    adjusted.Show();
    cout << endl;
    return 0;
}

