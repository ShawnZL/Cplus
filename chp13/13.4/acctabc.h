//
// Created by Shawn Zhao on 2022/3/21.
//

#ifndef INC_13_4_ACCTABC_H
#define INC_13_4_ACCTABC_H
#include <iostream>
#include <string>
class AcctABC{
private:
    std::string fullName;
    long acctNum;
    double balance;
protected:
    struct Formatting{
        std::ios_base::fmtflags flag;
        std::streamsize pr;
    };
    const std::string & FullName() const {return fullName;}
    long AcctNum() const {return acctNum;}
    Formatting SetFormat() const;
    void Restore(Formatting & f) const;
public:
    AcctABC(const std::string & s = "Nullbody", long an = -1, double bal = 0.0);
    void Deposit(double amt);
    virtual void Withdraw(double amt) = 0; //pure virtual function
    double Balance() const {return balance;}
    virtual void ViewAcct() const = 0; // pure virtual function
    virtual ~AcctABC() {}
};

//Brass Account Class
class Brass : public AcctABC {
public:
    Brass(const std::string & s = "Nullbody", long an = -1, double bal = 0.0) : AcctABC(s, an, bal) { }
    virtual void Withdraw(double amt);
    virtual void ViewAcct() const;
    virtual ~Brass() {}
};

// Brass Plus Account Class
class BrassPlus : public AcctABC {
private:
    double maxLoan;
    double rate;
    double owesBank;
public:
    BrassPlus(const std::string & s = "Nullbody", long an = -1, double bal = 0.0, double m1 = 500, double r = 0.10);
    BrassPlus(const Brass & ba, double m1 = 500, double r = 0.1);
    virtual void ViewAcct() const;
    virtual void Withdraw(double amt);
    void ResetMax(double m) {maxLoan = m; } //内联函数
    void ResetRate(double r) {rate = r;}; //内联函数
    void ResetOwes() {owesBank = 0;}
};

#endif //INC_13_4_ACCTABC_H
