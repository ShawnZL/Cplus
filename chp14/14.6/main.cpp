#include <iostream>
#include <cstdlib> //for rand(), srand()
#include <ctime>
#include "stcktp1.h"
const int Num = 10;

int main() {
    std::srand(std::time(0)); // randomize rand()
    std::cout << "Please enter stack size: ";
    int stacksize;
    std::cin >> stacksize;
    // create am empty stack with stacksize slots
    Stack<const char *> st(stacksize); //指针
    // in basket
    const char * in[Num] = {
            "1: Hank Gilgamesh", "2: Kiki Ishtar",
            "3: Betty Rocker", "Ian Flagranti",
            "Wolfgang Kibble", "Portia Koop",
            "Joy Almonda", "Xaverie Paprika",
            "Juan Moore", "Misha Mache"
    };
    const char * out[Num];
    int processed = 0;
    int nextin = 0;
    while (processed < Num) {
        if (st.isempty())
            st.push(in[nextin++]);
        else if (st.isfull())
            st.pop(out[processed++]);
        else if (std::rand() % 2 && nextin < Num)
            st.push(in[nextin++]);
        else
            st.pop(out[processed++]);
    }
    for (int i = 0; i < Num; ++i)
        std::cout << out[i] << std::endl;

    std::cout << "Bye\n";
    return 0;
}
