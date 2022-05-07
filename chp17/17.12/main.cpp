#include <iostream>
#include <exception>

int main() {
    using namespace std;
    // have failbit cause an exception to be thrown
    cin.exceptions(ios_base::failbit);
    cout << "Enter numbers:";
    int sum = 0, input;
    /*
    try {
        while (cin >> input) {
            sum += input;
        }
    }

    catch (ios_base::failure & bf) {
        cout << bf.what() << endl;
        cout << "O! the horror!\n";
    }

    cout << "Last value entered = " << input << endl;
    cout << "Sum = " << sum << endl;
    */
    while (cin >> input) {
        sum += input;
    }
    cout << "Last value entered = " << input << endl;
    cout << "Sum = " << sum << endl;
    if (cin.fail() && !cin.eof() ) {
        // failed because of mismatched input
        cin.clear(); // reset
        while (!isspace(cin.get()))
            continue; //get rid of bad input
    }
    else {
        cout << "I cannot go on!\n";
        exit(1);
    }
    cout << "Now enter a new number:";
    cin >> input;
    return 0;
}
