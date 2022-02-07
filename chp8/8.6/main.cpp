#include <iostream>
#include <string>
struct free_throws {
    std::string name;
    int made;
    int attempts;
    float percents;
};
void display(const free_throws & ft);
void set_pc(free_throws & ft);
free_throws & accumuluate(free_throws & target, const free_throws & source);

int main() {
    free_throws one = {"Ifelsa Branch", 13, 14};
    free_throws two = {"Andor Knott", 10, 16};
    free_throws three = {"Minnie Max", 7, 9};
    free_throws four = {"Whily Looper", 5, 9};
    free_throws five = {"Long Long", 6, 14};
    free_throws team = {"Throwgoods", 0, 0};

    free_throws dup;

    set_pc(one);
    display(one);
    accumuluate(team, one);
    display(team);
//use return value as argument
    display(accumuluate(team,two));
    accumuluate(accumuluate(team, three), four);
    display(team);
//use return value in assignment
    dup = accumuluate(team, five);
    std::cout << "Displaying team:\n";
    display(team);
    std::cout << "Displaying dup after assignment:\n";
    display(dup);
    set_pc(four);
// ill-advised assignment
    accumuluate(dup, five) = four;
    std::cout << "Displaying dup after ill-advised assignment:\n";
    display(dup);
    return 0;
}

void display(const free_throws & ft) {
    using std::cout;
    cout << "Name: " << ft.name << '\n';
    cout << " Made: " << ft.made << '\t';
    cout << "Attempts: " << ft.attempts << '\t';
    cout << "Percent: " << ft.percents << '\n';
}
//使用引用
void set_pc(free_throws & ft) {
    if (ft.attempts != 0)
        ft.percents = 100.0f *float(ft.made)/float(ft.attempts);
    // 设置100 为 f点数
    else
        ft.percents = 0;
}
//使用指针
void set_pcp(free_throws* pt) {
    if (pt->attempts != 0)
        pt->percents = 100.0f *float(pt->made)/float(pt->attempts);
    else
        pt->percents = 0;
}

free_throws & accumuluate(free_throws & target, const free_throws & source) {
    target.attempts += source.attempts;
    target.made += source.made;
    set_pc(target);
    return target;
}