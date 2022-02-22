#include <iostream>
#include "vector.h"
#include <cstdlib>
#include <ctime>
int main() {
    using namespace std;
    using VECTOR::Vector;
    srand(time(0)); //seed random-number generator
    //srand 覆盖随机序列，time(0)的返回值设置种子，返回当前时间。
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    cout << "Enter target distance (q to quit):\n";
    while (cin >> target) {
        cout << "Enter step length:\n";
        if (!(cin >> dstep))
            break;
        while (result.magval() < target) {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL); //POL模式
            result = result + step; //mode RECT
            steps++;
        }
        cout << "After " << steps << " steps, the subject "
            << "has the following location:\n";
        cout << result << endl;
        result.polar_mode();
        cout << " or\n" << result << endl;
        cout << "Average outward distance per step = "
            << result.magval() / steps << endl;
        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit):\n";
    }
    cout << "Bye!\n";
    cin.clear();
    while (cin.get() != '\n')
        continue;
    return 0;
}
