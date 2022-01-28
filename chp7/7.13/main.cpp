#include <iostream>
#include <cmath>
struct polar {
    double distance;
    double angle;
};

struct rect {
    double x;
    double y;
};

void rect_to_polar(const rect * pxy, polar * pda);
void show_polar(const polar * pda);

int main() {
    using namespace std;
    rect rplace;
    polar pplace;
    cout << "Enter the x and y value:\n";
    while (cin >> rplace.x >> rplace.y) {
        rect_to_polar(&rplace, &pplace);
        show_polar(&pplace);
        cout << "Next two number (q to quit):\n";
    }
    cout <<"Done.\n";
    return 0;
}

void rect_to_polar(const rect * pxy, polar * pda) {
    using namespace std;
    polar answer;
    pda->distance = sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
    pda->angle = atan2(pxy->y, pxy->x);
}

void show_polar (const polar * pda) {
    using namespace std;
    const double Red_to_dag = 57.29577951;
    cout << "distance = " << pda -> distance;
    cout <<", angle = " << pda->angle * Red_to_dag;
    cout << " degrees\n";
}
