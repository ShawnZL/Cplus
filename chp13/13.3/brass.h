//
// Created by Shawn Zhao on 2022/3/2.
//

#ifndef INC_13_3_BRASS_H
#define INC_13_3_BRASS_H
#include <string>
// Brass Account Class
class Brass {
private:
    std::string fullname;
    long acctNum;
    double balance;
public:
    Brass(const std::string & s = "Nullbody", long an = -1, double bal = 0.0);
    void Deposit(double amt);
    virtual void Withdraw(double amt);
    double Balance() const;
    virtual void ViewAcct() const;
    virtual ~Brass() {};
};

//Brass Plus Account Class
class BrassPlus : public Brass {
private:
    double maxLoan;
    double rate;
    double owesBank;
public:
    BrassPlus(const std::string & s = "Nullbody", long an = -1,
              double bal = 0.0, double m1 = 500, double r = 0.11125);
    BrassPlus(const Brass & ba, double m1 = 500, double r = 0.11125);
    virtual void ViewAcct() const;
    virtual void Withdraw(double amt); // 虚函数
    void ResetMax(double m) {maxLoan = m;}
    void ResetRate(double r) {rate = r; };
    void ResetOwes() {owesBank = 0;}
};

//Brass类和BrassPlus类都声明类ViewAcct和Withdraw，但是BrassPlus对象和Brass对象的这些方法行为是不同的
#endif //INC_13_3_BRASS_H
