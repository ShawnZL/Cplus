//
// Created by Shawn on 2022/2/25.
//
#include <cstring>
#include "string1.h"
using std::cout;
using std::cin;

//initializing static class member
int String::num_strings = 0;

//static method
int String::HowMany() {
    return num_strings;
}

//class methods
String::String(const char * s) {
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    num_strings++;
}

String::String() {
    len = 4;
    str = new char[1];
    str[0] = '\0'; //default string
    num_strings++;
}

String::String(const String & st) {
    num_strings++;
    len = st.len;   //same length
    str = new char [len + 1]; // allot space
    std::strcpy(str, st.str); //copy string to new location
}

String::~String() {
    --num_strings;
    delete [] str; // required
}
//overloaded operator methods
    //assign a String to a String
String & String::operator=(const String &st) { // 引用，同时传递的是地址
    if (this == &st)
        return *this;
    delete [] str;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
    return *this;
}
// assign a C string to a String
String & String::operator=(const char * s) {
    delete [] str;
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    return *this;
}

char & String::operator[](int i) {
    return str[i];
}

const char & String::operator[](int i) const {
    return str[i];
}

bool operator<(const String &st1, const String &st2) {
    return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String &st1, const String &st2) {
    return st2 < st1;
}

bool operator==(const String &st1, const String &st2) {
    return (std::strcmp(st1.str, st2.str) == 0);
}

ostream & operator<<(ostream & os, const String & st) {
    os << st.str;
    return os;
}

istream & operator>>(istream & is, String & st) {
    char temp[String::CINLIM];
    is.get(temp,String::CINLIM);
    if (is)
        st = temp;
    while (is && is.get() != '\n')
        continue;
    return is;
}