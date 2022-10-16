#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a,b,c,d,e,f;
    cin >> a >> b >> c >> d;
    
    e = c - a;
    if(d < b) {
        e -= 1;
        f = 60 - (b - d);
    } else {
        f = d - b;
    }
    cout << e << " " << f << endl;
    return 0;
}