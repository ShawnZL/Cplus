//
// Created by Shawn Zhao on 2022/2/22.
//
#include <cmath>
#include "vector.h"
using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace VECTOR {
    //compute degree in one radian
    const double Red_to_deg = 45.0 / atan(1.0);
    //should be about 57.2957795

    //private methods
    //calculates magnitude from x and y
    void Vector::set_mag() {
        mag = sqrt(x * x + y * y);
    }

    void Vector::set_ang() {
        if (x == 0.0 && y == 0.0)
            ang = 0.0;
        else
            ang = atan2(y, x);
    }
    //set x from polar coordinate
    void Vector::set_x(){
        x = mag * cos(ang);
    }

    void Vector::set_y() {
        y = mag * sin(ang);
    }
    //public methods
    Vector::Vector() { //default constructor
        x = y = mag = ang = 0.0;
        mode = RECT;
    }

    Vector::Vector(double n1, double n2, Mode form) {
        mode = form;
        if (form == RECT) {
            x = n1;
            y = n2;
            set_mag();
            set_ang();
        }
        else if (form == POL) {
            mag = n1;
            ang = n2;
            set_x();
            set_y();
        }
        else {
            cout << "Incorrect 3rd argument to Vector() -- ";
            cout << "vector set to 0\n";
            x = y = mag = ang = 0.0;
            mode = RECT;
        }
    }


    void Vector::reset(double n1, double n2, Mode form) {
        mode = form;
        if (form == RECT) {
            x = n1;
            y = n2;
            set_ang();
            set_mag();
        }
        else if (form == POL) {
            mag = n1;
            ang = n2 / Red_to_deg;
            set_x();
            set_y();
        }
        else {
            cout << "Incorrect 3 rd argument to Vector() -- ";
            cout << "vector set to 0\n";
            x = y = mag = ang = 0.0;
            mode = RECT;
        }
    }
    Vector::~Vector()
    {
    }
    void Vector::polar_mode() {
        mode = POL;
    }
    void Vector::rect_mode() {
        mode = RECT;
    }
    Vector Vector::operator+(const Vector &b) const {
        return Vector(x + b.x, y + b.y);
        //这里只用两个参数是因为设置了隐含参数RECT
    }
    Vector Vector::operator-(const Vector &b) const {
        return Vector(x - b.x, y - b.y);
    }
    Vector Vector::operator-() const {
        return Vector(-x, -y);
    }
    Vector Vector::operator*(double n) const {
        return Vector(x * n, y * n);
    }
    Vector operator*(double n, const Vector & a) {
        return a * n;
    }
    std::ostream & operator<<(std::ostream & os, const Vector & v) {
        if (v.mode == Vector::RECT) //友元函数不在范围内，必须进行类的作用域限定
            os << "(x,y) = (" << v.x << "," << v.y << ")";
        else if (v.mode == Vector::POL)
            os << "(x,y) = (" << v.mag << "," << v.ang * Red_to_deg << ")";
        else
            os << "Vector object mode is invalid";
        return os;
    }
}