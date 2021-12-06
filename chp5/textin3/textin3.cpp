#include <iostream>
using namespace std;

int main() {
    char ch;
    int count = 0;
    cin.get(ch);
    while (cin.fail() == false)  //while (cin.eof() == false)
    {
        cout << ch;
        ++count;
        cin.get(ch);
    }
    cout << endl << count << "characters read\n";
    /*
     * int ch;
     * ch = cin.get();
     * while (ch != EOF)
     * {
     *      cout.put(ch);
     *      ++count;
     *      ch = cin.get();
     * }
     *
     * while ((ch = cin.get()) != EOF)
     * */
    return 0;
}
