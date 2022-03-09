//
// Created by Shawn Zhao on 2022/3/8.
//
#include <iostream>
#include "brass.h"
using std::cout;
using std::endl;
using std::string;
// formatting stuff
typedef std::ios_base::fmtflags format;
typedef std::streamsize precis;
format setFormat();
void restore(format f, precis p);

//Brass methods
Brass::Brass(const std::string &s, long an, double bal) {
    fullname = s;
    acctNum = an;
    balance = bal;
}

void Brass::Deposit(double amt) {
    if (amt < 0)
        cout << "Negative deposit not allowed; "
            << "deposit is concelled.\n";
    else
        balance += amt;
}

void Brass::Withdraw(double amt) {
    // set up ###.## format
    format initialState = setFormat();
    precis prec = cout.precision(2);
    if (amt < 0)
        cout << "Withdrawal amount must be positive; "
            << "withdrawal your balanced.\n";
    else if (amt <= balance)
        balance -= amt;
    else
        cout << "Withdrawal amount of $" << amt
            << " exceeds your balance.\n"
            << "Withdrawal canceled.\n";
    restore(initialState, prec);
}

double Brass::Balance() const {
    return balance;
}

void Brass::ViewAcct() const {
    // set up ###.## format
    format initialState = setFormat();
    precis prec = cout.precision(2);
    cout << "Client: " << fullname << endl;
    cout << "Account Number: " << acctNum << endl;
    cout << "Balance: $" << balance << endl;
    restore(initialState, prec);
}

//BrassPlus Methods
BrassPlus::BrassPlus(const std::string &s, long an, double bal, double m1, double r) : Brass(s, an, bal){
    maxLoan = m1;
    owesBank = 0.0;
    rate = r;
}

BrassPlus::BrassPlus(const Brass &ba, double m1, double r) : Brass(ba){
    //uses implicit copy constructor
    maxLoan = m1;
    owesBank = 0.0;
    rate = r;
}

//redefine how ViewAcct() works
void BrassPlus::ViewAcct() const {
    format initialState = setFormat();
    precis prec = cout.precision(2);

    Brass::ViewAcct(); // display base portion
    cout << "Maximum loan: $" << maxLoan << endl;
    cout << "Owed to bank: $" << owesBank << endl;
    cout.precision(3);
    cout << "Loan Rate: " << 100 * rate << "%\n";
    restore(initialState, prec);
}

//redefine how Withdraw() works
void BrassPlus::Withdraw(double amt) {
    format initialState = setFormat();
    precis prec = cout.precision(2);

    double bal = Balance();
    if (amt <= bal)
        Brass::Withdraw(amt);
    else if (amt <= bal + maxLoan - owesBank) {
        double advance = amt - bal;
        owesBank += advance * (1.0 + rate);
        cout << "Bank advance: $" << advance << endl;
        cout << "Finance charge: $" << advance * rate << endl;
        Deposit(advance);
        Brass::Withdraw(amt);
    }
    else
        cout << "Credit limit exceeded. Transaction cancelled.\n";
    restore(initialState, prec);
}

format setFormat() {
    return cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
}

void restore(format f, precis p) {
    cout.setf(f, std::ios_base::floatfield);
    cout.precision(p);
}