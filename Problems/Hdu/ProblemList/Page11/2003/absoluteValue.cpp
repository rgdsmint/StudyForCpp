#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double v;
    while (cin >> v) {
        if (v >= 0) {
            cout << fixed << setprecision(2) << v << endl;
        } else {
            cout << fixed << setprecision(2) << -v << endl;
        }
    }
    return 0;
}