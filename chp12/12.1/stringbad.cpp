//
// Created by Shawn Zhao on 2022/2/24.
//
#include <cstring>
#include "stringbad.h"
using std::cout;

//initializing static class member
int StringBad::num_strings = 0;

StringBad::StringBad(const char *s) {
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s); //initialize pointer
    num_strings++;
    cout << num_strings << ": \"" << str
        << "\" object created\n";
}

StringBad::StringBad() {
    len = 4;
    str = new char[len + 1];
    std::strcpy(str, "C++");
    num_strings++;
    cout << num_strings << ":\"" << str
        << "\" default object created\n";
}

StringBad::~StringBad() {
    cout << "\"" << str << "\"object delete, ";
    --num_strings;
    cout << num_strings << " left\n";
    delete [] str; //required
}

std::ostream & operator<<(std::ostream & os, const StringBad & st)
{
    os << st.str;
    return os;
}

StringBad & StringBad::operator=(const StringBad &st) { //返回对于一个对象的引用！
    if (this == &st)
        return *this;
    delete [] str; //free old string
    len = st.len;
    str = new char [len + 1]; //get space for new string
    std::strcpy(str, st.str); //copy the string
    return *this;
}