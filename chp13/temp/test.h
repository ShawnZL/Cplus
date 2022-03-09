//
// Created by Shawn Zhao on 2022/3/8.
//

#ifndef TEMP_TEST_H
#define TEMP_TEST_H
#include <iostream>
using std::cout;
using std::endl;
class Brass{
public:
    virtual void f(){ cout << "Base::f" << endl;}
    virtual void g(){ cout << "Base::g" << endl;}
    virtual void h(){ cout << "Base::h" << endl;}
};

class Brassson : public Brass {

};
#endif //TEMP_TEST_H
