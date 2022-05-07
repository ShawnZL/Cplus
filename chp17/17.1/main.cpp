#include <iostream>
#include <cstring>
int main() {
    using std::cout;
    using std::endl;
    const char * state1 = "Florida";
    const char * state2 = "Kansas";
    const char * state3 = "Euphoria";
    int len = std::strlen(state2);
    cout << "Increasing loop index:\n";
    int i;
    for (i = 1; i <= len; ++i) {
        cout.write(state2,i);
        cout << endl;
    }
    cout << "Decreasing loop index:\n";
    for (i = len; i > 0; --i) {
        cout.write(state2,i) << endl; //这里权且将i当作长度
    }
    cout << "Exceeding string length:\n";
    cout.write(state2, len + 30) << endl;

    return 0;
}
