//
// Created by Shawn on 2022/2/18.
//

#ifndef INC_10_1_STOCK00_H
#define INC_10_1_STOCK00_H
#include <string>
class Stock { // class declaration
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val;}

public:
    void acquire(const std::string & co, long n, double pr);
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show(); //note semicolon at the end
};
#endif //INC_10_1_STOCK00_H