#include <iostream>
#include <string>
using namespace std;
int main() {
    cout << "Enter a word: ";
    string word;
    cin >> word;
    char temp;
    int i, j;
    for (j = 0, i = word.size() - 1; j < i; --i, ++j)
    {
        swap(word[j], word[i]);
    }
    cout << word << "\nDone\n";
    return 0;
}
