//
// Created by Shawn Zhao on 2022/2/22.
//

#ifndef INC_11_7_STONEWT1_H
#define INC_11_7_STONEWT1_H
class Stonewt {
private:
    enum {Lbs_per_stn = 14}; //pounds per stone
    int stone;
    double pds_left;
    double pounds;
public:
    Stonewt();
    Stonewt(double lbs);
    Stonewt(int stn, double lbs);
    ~Stonewt();
    void show_lbs() const;
    void show_stn() const;
//conversion function
    operator int() const;
    operator double() const;
};
#endif //INC_11_7_STONEWT1_H
