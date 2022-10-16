#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a,b,c,d;
    cin >> a >> b >> c;
    d = a*0.2+b*0.3+c*0.5;
    cout << d << endl;
    return 0;
}