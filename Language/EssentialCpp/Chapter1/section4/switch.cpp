#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    switch (num) {
        case 1:
            cout << 111111 << endl;
            cout << 111111 << endl;
            break;
        case 2:
            cout << 2 << endl;
            break;
        case 3:
            cout << 3 << endl;
            break;
        default:
            cout << "no" << endl;
            cout << "fault" << endl;
            break;
    }
    return 0;
}