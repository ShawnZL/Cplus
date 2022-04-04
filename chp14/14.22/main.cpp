#include <iostream>
using std::cout;
using std::endl;

template <typename T>
class HasFriend {
private:
    T item;
    static int ct;
public:
    HasFriend(const T & i) : item(i) { ct++; }
    ~HasFriend() { ct--; }
    friend void counts();
    friend void reports(HasFriend<T> &); //template parameter
};

//each specialization has its own static data member
template <typename T>
int HasFriend<T>::ct = 0;
// non-template friend to all HasFriend<T> classes
void counts() {
    cout << "int count: " << HasFriend<int>::ct << "; ";
    cout << "double count: " << HasFriend<double>::ct << endl;
}
//non-template friends to the Hasfriend<int> class
void reports(HasFriend<int> & hf) {
    cout << "HasFriend<int>: " << hf.item << endl;
}

void reports(HasFriend<double> & hf) {
    cout << "HasFriend<double>: " << hf.item << endl;
}

int main() {
    cout << "No object declared: ";
    counts();
    HasFriend<int> hfi1(10);
    cout << "After hfi1 declared: ";
    counts()
    return 0;
}
