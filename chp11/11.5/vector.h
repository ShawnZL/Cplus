//
// Created by Shawn Zhao on 2022/2/22.
//

#ifndef INC_11_5_VECTOR_H
#define INC_11_5_VECTOR_H
#include <iostream>
namespace VECTOR{
    class Vector{
    public:
        enum Mode {RECT, POL};
        // rect for retangular, pol for polar modes
    private:
        double x;
        double y;
        double mag; // length of vector
        double ang; // direction of vector in degrees
        Mode mode; //Rect or Pol
        void set_mag();
        void set_ang();
        void set_x();
        void set_y();
    public:
        Vector(); // 默认构造函数
        Vector(double n1, double n2, Mode form = RECT);
        void reset(double n1, double n2, Mode form = RECT);
        ~Vector();
    // 内联函数
        double xval() const {return x;} //report x value
        double yval() const {return y;} //report y value
        double magval() const {return mag;} //report magnitude
        double angval() const {return ang;} //report angle
    ////
    /*
     * 尾部const 使用对象是隐式，表示保证不会调用对象，
     * */
        void polar_mode(); //set mode to POL
        void rect_mode(); //set mode to rect
    //operator overloading
        Vector operator+(const Vector & b) const;
        Vector operator-(const Vector & b) const;
        Vector operator-() const;
        Vector operator*(double n) const;
    //friend
        friend Vector operator*(double n, const Vector & a);
        friend std::ostream & operator<<(std::ostream & os, const Vector & v);
    };
}
#endif //INC_11_5_VECTOR_H
