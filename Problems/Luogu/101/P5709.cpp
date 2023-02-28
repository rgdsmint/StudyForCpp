#include <iostream>
using namespace std;

int main() {
    int m, t, s;
    cin >> m >> t >> s;
    int allT = t * m;
    if(t == 0) {
        cout << 0 << endl;
        return 0;
    }
    if(allT - t < s) {
        cout << 0 << endl;
        return 0;
    }
    int y = s % t;
    if (y != 0) {
        m -= (s - y) / t + 1;
    } else {
        m -= s / t;
    }
    cout << m << endl;
    return 0;
}