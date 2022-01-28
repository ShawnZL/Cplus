#include <iostream>
char * buildstr(char c, int n);

int main() {
    using namespace std;
    int times;
    char ch;
    cout << "Enter a char acter: ";
    cin >> ch;
    cout << "Enter an integer: ";
    cin >> times;
    char *ps = buildstr(ch, times);
    cout << ps << endl;
    delete [] ps; //free memory
    ps = buildstr('+', 20);
    cout << ps << "-Done-" << ps << endl;
    delete [] ps;
    return 0;
}

//build string made of n c characters
char * buildstr(char c, int n) {
    char * pstr = new char[n + 1];
    pstr[n] = '\0'; //字符串和字符串数组区别
    while (n-- > 0)
        pstr[n] = c;
    return pstr;
}
