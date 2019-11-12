#include <cstdio>
#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    freopen("data.in", "r", stdin);
    int a, b, c, count = 1;
    while (cin >> a >> b >> c) {
        for (int i = 10; i <= 100; i++) {
            if ((i%3==a)&&(i%5==b)&&(i%7==c)) {
                cout << "Case " << count << ": "<< i << endl;
                break;
            }
            if (i == 100) {
                cout << "Case " << count << ": No Answer" << endl;
            }
        }
        count++;
    }
    return 0;
}
