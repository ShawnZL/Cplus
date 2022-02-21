//
// Created by Shawn Zhao on 2022/2/21.
//

#ifndef INC_11_4_MYTIME3_H
#define INC_11_4_MYTIME3_H
class Time{
private:
    int hours;
    int minutes;
public:
    Time();//默认构造函数
    Time(int h, int m = 0); //有参数的构造函数
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h = 0, int m = 0);
    Time Sum(const Time & t) const; //const
    Time operator+(const Time & t) const;
    Time operator*(double n) const;
    Time operator-(const Time & t) const;
    friend Time operator*(double m, const Time & t) {
        return t * m; //inline definition
    }
    friend std::ostream & operator<<(std::ostream & os, const Time & t);
    ~Time();
};
#endif //INC_11_4_MYTIME3_H
