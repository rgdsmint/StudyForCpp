#include <iostream>
using namespace std;

int main() {
    int peach, day;
    while (cin >> day) {
        peach = 1;                                                
        for (int i = 1; i < day; i++) {
            peach = (peach + 1) * 2;
        }
        cout << peach << endl;
    }
}