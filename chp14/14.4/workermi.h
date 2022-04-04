//
// Created by Shawn Zhao on 2022/4/3.
//

#ifndef INC_14_4_WORKERMI_H
#define INC_14_4_WORKERMI_H

#include <string>
class Worker { // an abstract base class
private:
    std::string fullname;
    long id;
protected:
    virtual void Data() const;
    virtual void Get();
public:
    Worker():fullname("no one"), id(0L) {}
    Worker(const std::string & s, long n): fullname(s), id(n) {}
    virtual ~Worker() = 0; //pure virtual destructor
    //纯虚函数就是父类不给定义，子类必须要实现这个函数，不然子类不能被具象化
    virtual void Set() = 0;
    virtual void Show() const = 0;
};

class Waiter: virtual public Worker {
private:
    int panache;
protected:
    void Data() const;
    void Get();
public:
    Waiter() : Worker(), panache(0) {}
    Waiter(const std::string & s, long n, int p) : Worker(s, n), panache(p) {}
    Waiter(const Worker & wk, int p = 0): Worker(wk), panache(p) {}
    void Set();
    void Show() const;
};

class Singer : virtual public Worker {
protected:
    enum {other, also, contralto, soprano, bass, baritone, tenor};
    enum {Vtypes = 7};
    void Data() const;
    void Get();
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

// multiple inhereitance
class SingingWaiter : public Singer, public Waiter {
protected:
    void Data() const;
    void Get();
public:
    SingingWaiter() {}
    SingingWaiter(const std::string & s, long n, int p = 0, int v = other)
            : Worker(s, n), Waiter(s, n, p), Singer(s, n, v) {}
    SingingWaiter(const Worker & wk, int p = 0, int v = other)
            : Worker(wk), Waiter(wk, p), Singer(wk, v) {}
    SingingWaiter(const Waiter & wt, int v = other)
            : Worker(wt), Waiter(wt), Singer(wt, v) {}
    SingingWaiter(const Singer & wt, int p = 0)
            : Worker(wt), Waiter(wt, p), Singer(wt) {}
    void Set();
    void Show() const;
};


#endif //INC_14_4_WORKERMI_H
