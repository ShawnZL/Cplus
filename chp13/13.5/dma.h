//
// Created by Shawn Zhao on 2022/3/21.
//

#ifndef INC_13_5_DMA_H
#define INC_13_5_DMA_H
#include <iostream>
class baseDMA {
private:
    char * label;
    int rating;
public:
    baseDMA(const char * l = "null", int r = 0);
    baseDMA(const baseDMA & rs);
    virtual ~baseDMA();
    baseDMA & operator=(const baseDMA & rs);
    friend std::ostream & operator<<(std::ostream & os, const baseDMA & rs);
};
//derived class without DMA
//no destructor needed

class lackDMA : public baseDMA {
private:
    enum {COL_LEN = 40};
    char color[COL_LEN];
public:
    lackDMA(const char * c = "blank", const char * l = "null", int r = 0);
    lackDMA(const char * c, const baseDMA & rs);
    friend std::ostream & operator<<(std::ostream & os, const lackDMA & rs);
};

//derived class with DMA
class hasDMA: public baseDMA {
private:
    char * style;
public:
    hasDMA(const char * s = "none", const char * l = "null", int r = 0);
    hasDMA(const char * s, const baseDMA & rs);
    hasDMA(const hasDMA & hs);
    ~hasDMA();
    hasDMA & operator=(const hasDMA & rs);
    friend std::ostream & operator<<(std::ostream & os, const hasDMA & rs);
};

#endif //INC_13_5_DMA_H
