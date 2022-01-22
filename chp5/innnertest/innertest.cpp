#include <iostream>
using namespace std;
//内外同时定义一个变量，运行在内部语句块结束的范围之内，新变量将隐藏旧变量
int main() {
    int x = 20; //original x
    {
        cout << x << endl;
        int x = 100; //new x
        cout << x << endl;
    }
    cout << x << endl;
    return 0;
}
