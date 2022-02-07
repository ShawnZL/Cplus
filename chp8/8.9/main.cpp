#include <iostream>
#include <cstring>

using namespace std;
const int ArSize = 80;
char * left(const char * str, int n = 1);
int main() {
    char sample[ArSize];
    cout << "Enter a string:\n";
    cin.get(sample, ArSize);
    char *ps = left(sample, 4);
    cout << ps << endl;
    delete [] ps;
    ps = left(sample);
    cout << ps << endl;
    delete [] ps;
    return 0;
}
// This function returns a pointer to a new string
// consisting of the first n characters in the str string

char * left(const char * str, int n) {
    if (n < 0)
        n = 0;
    else
        n = (n < strlen(str));
    char * p = new char[n + 1];// 最后一位是 \0
    int i;
    for (i = 0; i < n && str[i]; ++i) //very important
        p[i] = str[i];
    while (i <= n)
        p[i++] = '\0'; //set rest of string to '\0'
    return p;
}
