#include <iostream>
using namespace std;
const int Max = 5;

int main() {
    int golf[Max];
    cout << "Please Enter your golf number\n";
    cout << "You must enter " << Max << " round\n";
    int i;
    for (i = 0; i < Max; ++i) {
        cout << "round #" << i + 1 << ": ";
        while (!(cin >> golf[i])) {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "please enter a number: ";
        }
    }
    double total = 0.0;
    for (i = 0; i < Max; ++i)
        total += golf[i];
    cout << total / Max << " = average score "
            << Max << " rounds\n";
    return 0;
}
