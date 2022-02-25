//
// Created by Shawn on 2022/2/25.
//
// string1.h -- fixed and augmented string class definition
#ifndef INC_12_2_STRING1_H
#define INC_12_2_STRING1_H
#include <iostream>
using std::ostream;
using std::istream;

class String {
private:
    char * str;             // pointer to string
    int len;                // length of string
    static int num_strings; // number of object

    // cin input limit
    static const int CINLIM = 80;

public:
    String(const char * s); //constructor
    String(); //default constructor
    String(const String &); // copy constructor
    ~String();
    int length() const {return len; }
// overloaded operator methods
    String & operator=(const String &);
    String & operator=(const char *);
    char & operator[](int i); //not const
    const char & operator[](int i) const; //const
// overloaded operator friends
    friend bool operator<(const String &st1, const String &st2);
    friend bool operator>(const String &st1, const String &st2);
    friend bool operator==(const String &st1, const String &st2);
    friend ostream & operator<<(ostream & os, const String & st); // cout
    friend istream & operator>>(istream & is, String & st);
//static function
    static int HowMany();

};
#endif //INC_12_2_STRING1_H
