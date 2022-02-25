#include <iostream>
#include <cstdlib>
#include <ctime>
#include "string1.h"
const int ArSize = 10;
const int MaxLen = 81;

int main() {
    using namespace std;
    String name;
    cout << "Hi, what`s your name?\n>> ";
    cin >> name;

    cout << name << ", please enter up to " << ArSize
        << " short saying <empty line to quit>:\n";
    String sayings[ArSize];
    char temp[MaxLen];
    int i;
    for (i = 0; i < ArSize; ++i) {
        cout << i + 1 << ": ";
        cin.get(temp, MaxLen);
        while (cin && cin.get() != '\n')
            continue;
        if (!cin || temp[0] == '\0')
            break;
        else
            sayings[i] = temp;
    }

    int total = i; //total lines raed
    if (total > 0) {
        cout << "Here are your sayings:\n";
        for (i = 0; i < total; ++i)
            cout << sayings[i] << "\n";
        String * shortest = &sayings[0]; //initializae to first object
        String * first = &sayings[0];
        for (i = 1; i < total; ++i) {
            if (sayings[i].length() < shortest->length())
                shortest = &sayings[i];
            if (sayings[i] < *first) //compare value
                first = &sayings[i]; //assign address
        }
        cout << "Shortest saying:\n" << * shortest << endl;
        cout << "First alphabetically:\n" << * first << endl;
        srand(time(0));
        int choice = rand() % total; //pick index at random
        //use new to create, initialize new String object
        String * favourite = new String(sayings[choice]);
        cout << "My favourite saying:\n" << *favourite << endl;
        delete favourite;
    }
    else
        cout << "not much to say, eh?\n";
    cout << "Bye.\n";
    return 0;
}
