#include <iostream>
#include "test.h"

using std::cout;
using std::endl;
int main() {
    typedef void(*Fun)(void);
    Brass b;
    Fun pFun = NULL;
    cout << "虚函数表地址：" << (int*)(&b) << endl;
    //强制转换为(int*)取得虚函数表的地址
    cout << "虚函数表——第一个函数地址：" << (int*)*(int*)(&b) << endl;
    //再次取地址就可以得到第一个虚函数的地址
    pFun = (Fun)*((int*)*(int*)(&b));
    pFun();
    return 0;
}
