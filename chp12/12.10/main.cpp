#include <iostream>
#include <cstdlib>
#include <ctime>
#include "queue.h"
const int MIN_PRE_HR = 60;

bool newcustomer(double x);
int main() {
    using std::cin;
    using std::cout;
    using std::endl;
    using std::ios_base;
    std::srand(time(0));

    cout << "Case Study: Bank of Heather Automacit Teller\n";
    cout << "Enter maximum size of queue: ";
    int qs;
    cin >> qs;
    Queue line(qs);

    return 0;
}

bool newcustomer(double x)
{
    return (std::rand() * x / RAND_MAX < 1);
}
