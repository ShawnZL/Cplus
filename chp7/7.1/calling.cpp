#include <iostream>

using namespace std;
void sample() {
    cout << "I`m but a simple function.\n";
}
int main() {
    cout << "main() will call the sample() function:\n";
    sample();
    cout << "main() is finished with the simple() function.\n";
    return 0;
}
