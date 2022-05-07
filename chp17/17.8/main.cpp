#include <iostream>

int main() {
    using std::cout;
    using std::endl;
    using std::ios_base;

    int temperature = 63;
    cout << "Today`s water temperature:";
    cout.setf(ios_base::showpoint); //show plus sign
    cout << temperature << endl;
    cout.setf(ios_base::uppercase);
    cout.setf(ios_base::showbase); // use OX prefix for hex
    cout << "or\n";
    cout << temperature << endl;
    cout << "How " << true << "! oops -- How ";
    cout.setf(ios_base::boolalpha);
    cout << true << "!\n";

    return 0;
}
