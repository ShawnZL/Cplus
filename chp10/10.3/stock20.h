//
// Created by Shawn on 2022/2/18.
//

#ifndef INC_10_3_STOCK20_H
#define INC_10_3_STOCK20_H
#include <string>
class Stock { // class declaration
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val;}

public:
    Stock(); //default constructor 默认构造函数，无参数
    Stock(const std::string & co, long n = 0, double pr = 0.0); //构造函数
    ~Stock(); //noisy destructor
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show() const; //note semicolon at the end
    const Stock & topval(const Stock & s) const;
};
#endif //INC_10_3_STOCK20_H
