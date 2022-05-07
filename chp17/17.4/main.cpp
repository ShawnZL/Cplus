#include <iostream>

int main() {
    using std::cout;
    int w = cout.widen(30);
    cout << "default field width = " << w << ":\n";
    cout.widen(5);
    cout << "N" << ':';
    cout.widen(8);
    cout << "N * N" << ":\n";
    for (long i = 1; i <= 100; i *= 10) {
        cout .width(5);
        cout << i << ':';
        cout.width(8);
        cout << i * i << ":\n";
    }
    return 0;
}
