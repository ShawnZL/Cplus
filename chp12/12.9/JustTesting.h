//
// Created by Shawn on 2022/2/25.
//

#ifndef INC_12_9_JUSTTESTING_H
#define INC_12_9_JUSTTESTING_H
#include <string>
#include <iostream>
using namespace std;
class JustTesting {
private:
    string words;
    int number;
public:
    JustTesting(const string & s = "Just Testing", int n = 0){
        words = s;
        number = n;
        cout << words << " contructed\n";
    }
    //JustTesting();
    ~JustTesting() {
        cout << words << " destroyed\n";
    }
    void Show() const {
        cout << words << ", " << number << endl;
    }
};
#endif //INC_12_9_JUSTTESTING_H
