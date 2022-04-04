//
// Created by Shawn Zhao on 2022/4/2.
//

#ifndef INC_14_3_WORKER0_H
#define INC_14_3_WORKER0_H
#include <string>
class Worker { // an abstract base class
private:
    std::string fullname;
    long id;
public:
    Worker():fullname("no one"), id(0L) {}
    Worker(const std::string & s, long n): fullname(s), id(n) {}
    virtual ~Worker() = 0; //pure virtual destructor
    //纯虚函数就是父类不给定义，子类必须要实现这个函数，不然子类不能被具象化
    virtual void Set();
    virtual void Show() const;
};

class Waiter:public Worker {
private:
    int panache;
public:
    Waiter() : Worker(), panache(0) {}
    Waiter(const std::string & s, long n, int p) : Worker(s, n), panache(p) {}
    Waiter(const Worker & wk, int p = 0): Worker(wk), panache(p) {}
    void Set();
    void Show() const;
};

class Singer : public Worker {
protected:
    enum {other, also, contralto, soprano, bass, baritone, tenor};
    enum {Vtypes = 7};
private:
    static char *pv[Vtypes];
    int voice;
public:
    Singer(): Worker(), voice(other) {}
    Singer(const std::string & s, long n, int v = other): Worker(s, n), voice(v) {}
    Singer(const Worker & wk, int v = other) : Worker(wk), voice(v) {}
    void Set();
    void Show() const;
};

#endif //INC_14_3_WORKER0_H
