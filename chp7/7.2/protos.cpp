#include <iostream>
#include <cmath>

using namespace std;
double cube(double x); //prototype: return a double
void cheers(int); //prototype: no return value;
int main() {
    cheers(5);
    cout << "Give me a number";
    double side;
    cin >> side;
    double volume = cube(side);
    cout << "A " << side << "-foot cube has a volume of ";
    cout << volume << " cubic feet.\n";
    cheers(cube(2.5)); // prototype protection at work
    return 0;
}

void cheers(int n) {
    //printf("n = %d\n", n);
    for (int i = 0; i < n; ++i) {
        cout << "Cheers! ";
    }
    cout << endl;
}

double cube(double x) {
    //return x * x * x;
    return pow(x, 3);
}
