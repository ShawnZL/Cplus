#include <iostream>
double hmean(double x, double y);

int main() {
    double x, y, z;
    std::cout << "Enter two numbers:";
    while (std::cin >> x >> y) {
        try {   // start of try block
            z = hmean(x, y);
        } //end of try block
        catch (const char * s) { // start of exception handler
            // 触发本次异常处理的参数是char，将导致
            std::cout << s << std::endl;
            std::cout << "Enter a new pair of numbers:";
            continue;
        } // end of handler
        std::cout << "Harmonic mean of " << x << " and " << y
                << " is " << z << std::endl;
        std::cout << "Enter next set of numbers <q to quit>:";
    }
    std::cout << "Bye!\n";
    return 0;
}
double hmean(double x, double y) {
    if (x == -y)
        throw "bad hmean() arguments: a = -b not allowed";
    return 2.0 * x * y / (x + y);
}
