#include <iostream>
#include <array>
#include <string>

const int Season = 4;
const std::array<std::string, Season> Sname = {"Spring", "Summer", "Fall", "Winter"};
// function to modify array object
void fill(std::array<double, Season> * pa);
void show(std::array<double, Season> da);
int main() {
    std::array<double, Season> expenses;
    fill(&expenses); //注意！！！
    show(expenses);
    return 0;
}

void fill(std::array<double, Season> * pa) {
    using namespace std;
    for (int i = 0; i < Season; ++i) {
        cout << "Enterr " << Sname[i] << " expenses:\n";
        cin >> (*pa)[i];
    }
}

void show(std::array<double, Season> da) {
    using namespace std;
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < Season; ++i) {
        cout << Sname[i] << ":$" << da[i] << endl;
        total += da[i];
    }
    cout << "Total Expenses: $" << total << endl;
}
