//
// Created by Shawn Zhao on 2022/2/24.
//

#ifndef INC_12_1_STRINGBAD_H
#define INC_12_1_STRINGBAD_H
#include <iostream>
class StringBad
{
private:
    char * str; //pointer to string
    int len; //length of string
    static int num_strings;
public:
    StringBad(const char * s); //constructor
    StringBad(); //default constructor
    ~StringBad();
    //friend
    friend std::ostream & operator << (std::ostream & os, const StringBad & st);
    StringBad & StringBad::operator=(const StringBad & st);
};
#endif //INC_12_1_STRINGBAD_H
