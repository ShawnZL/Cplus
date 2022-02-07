#include <iostream>

template <typename T> //or class T
void Swap(T &a, T &b);
int main() {
    using namespace std;
    int i = 10;
    int j = 20;
    cout << "i, j = " << i << ", " << j << ".\n";
    cout << "Using compiler-generated int swapper:\n";
    swap(i, j);
    cout << "Now i, j = " << i << ", " << j << endl;

    double x = 24.5;
    double y = 123.321;
    cout << "x, y = " << x << ", " << y << ".\n";
    cout << "Using compiler-generated int swapper:\n";
    swap(x, y);
    cout << "Now x, y = " << x << ", " << y << endl;
    return 0;
}
template <typename T>
void Swap(T &a, T &b) {
    T temp;
    temp = a;
    a = b;
    b = temp;
}
