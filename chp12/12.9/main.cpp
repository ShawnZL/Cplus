#include <iostream>
#include <new>
#include "JustTesting.h"
using namespace std;
const int BUF = 512;

int main() {
    char * buffer = new char [BUF]; //get block of memory

    JustTesting *pc1, *pc2;
    pc1 = new (buffer) JustTesting; //place object in buffer
    pc2 = new JustTesting("Heap1", 20);

    cout << "Memory block addresses:\n" << "buffer: "
         << (void *) buffer << "   heap: " << pc2 << endl;
    cout << "Memory contents:\n";
    cout << pc1 << ": ";
    pc1->Show();
    cout << pc2 << ": ";
    pc2->Show();

    JustTesting *pc3, *pc4;

    pc3 = new (buffer + sizeof(JustTesting)) JustTesting("Better Idea", 6);
    pc4 = new JustTesting("Heap2", 10);

    cout << "Memory contents:\n";
    cout << pc3 << ": ";
    pc3->Show();
    cout << pc4 << ": ";
    pc4->Show();
    delete pc2;
    delete pc4;

    pc3->~JustTesting();
    pc1->~JustTesting();

    delete [] buffer;
    cout << "Done\n";
    return 0;
}

