#include <iostream>
#include <cstdlib> // for exit(),
#include <new>
using namespace std;

struct Big {
    double stuff[20000];
};

int main() {
    Big * pd;
    /*
    try {
        cout << "Try to get a big block of memory:\n";
        pd = new Big[10000]; // 1,600,000,000 bytes
        cout << "Got past the new request:\n";
    }
    catch (bad_alloc & ba) {
        cout << "Caught the exception!\n";
        cout << ba.what() << endl;
        exit(EXIT_FAILURE);
    }
    cout << "Memory successfully allocated\n";*/
    pd = new (std::nothrow) Big[10000];
    if (pd == 0) {
        cout << "Could not allocate memory. Bye.\n";
        exit(EXIT_FAILURE);
    }
    pd[0].stuff[0] = 4;
    cout << pd[0].stuff[0] << endl;
    delete [] pd;
    return 0;
}
