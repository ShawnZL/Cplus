//
// Created by Shawn Zhao on 2022/3/31.
//

#ifndef INC_14_1_STUDENTC_H
#define INC_14_1_STUDENTC_H
#include <iostream>
#include <string>
#include <valarray>
class Student {
private:
    typedef std::valarray<double> ArrayDb; // rename
    std::string name;
    ArrayDb scores; // contained object
    // private method for scores output
    std::ostream & arr_out(std::ostream & os) const;
public:
    Student() : name("Null Student"), scores() {} //默认构造函数
    explicit Student(const std::string & s) : name(s), scores() {}
    explicit Student(int n) : name("Nully"), scores(n) {}
    Student(const std::string & s, const ArrayDb & a) : name(s), scores(a) {}
    Student(const std::string & s, int n) : name(s), scores(n) {}
    Student(const char * str, const double * pd, int n) : name(str), scores(pd, n) {}
    ~Student() {}
    double Average() const;
    const std::string & Name() const;
    double & operator[](int i);
    double operator[](int i) const;
    // friends
    // input
    friend std::istream & operator>>(std::istream & is, Student & stu); //1 word
    friend std::istream & getline(std::istream & is, Student & stu); // 1 line
    // output
    friend std::ostream & operator<<(std::ostream & os, const Student & stu);
};

#endif //INC_14_1_STUDENTC_H
