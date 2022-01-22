#include <iostream>
#include <ctime>
using namespace std;
int main() {
    cout << "Enter the delay time, in seconds: ";
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC; //convert to clock ticks
    cout << "starting\a\n";
    clock_t  start = clock();
    while (clock() - start)
        ;
    cout << "done \a\n";
    return 0;
}
