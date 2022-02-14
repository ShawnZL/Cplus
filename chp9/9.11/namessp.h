//
// Created by Shawn on 2022/2/14.
//

#ifndef INC_9_11_NAMESSP_H
#define INC_9_11_NAMESSP_H
#include <string>
namespace pers {
    struct Person {
        std::string fname;
        std::string lname;
    };
    void getPerson(Person &);
    void showPerson(const Person &);
}

namespace debts {
    using namespace pers;
    struct Debt {
        Person name;
        double amount;
    };
    void getDebt(Debt &);
    void showDebt(const Debt &);
    double sumDebts(const Debt ar[], int n);
}
#endif //INC_9_11_NAMESSP_H
