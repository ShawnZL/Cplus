#include <iostream>
using namespace std;
int main() {
    double arr[5] = {21.1, 32.8, 23.4, 45.2, 37.4};
    double *pt = arr; //pt points to arr[0], i.e to 21.1
    ++pt;             //pt points to arr[1], i.e to 32.8
    //前缀递增，前缀递减和解除引用运算符(*)优先级相同，使用从右到左的方式结合
    double x = *++pt; //increment pointeer, take the value; i.e, arr[2], or 23.4
    ++*pt;            //increment the pointed to value; i.e., change 23.4 to 24.4
    //后缀递增，后缀递减比解除引用运算符(*)优先级高
    (*pt)++;          //increment pointed-to value
    x = *pt++;        //dereference original location, then increment pointer; i.e. change to arr[3]
    return 0;
}
