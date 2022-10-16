#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    double v,h,r;
    cin >> h >> r;
    v = M_PI*r*r*h/1000;
    double Need = 20;
    for(int n = 1;;n++) {
        Need -= v;
        if(Need <= 0) {
            cout << n << endl;
            break;
        }
    }
    return 0;
}