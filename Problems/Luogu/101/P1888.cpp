#include <algorithm>
#include <iostream>
using namespace std;
void gcd(int a, int b);
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a,b,c;
    cin >> a >> b >> c;
    int sides[3] = {a,b,c};
    sort(sides,sides+3);
    gcd(sides[0],sides[2]);
    return 0;
}

void gcd(int a, int b) {
    int c, d, e;
    d = a;
    e = b;
    while (e) {
        c = e;
        e = d%e;
        d = c;
    }
    cout << a/d << "/" << b/d;
}