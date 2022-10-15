#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    double a, b, c;
    cin >> a >> b >> c;
    double p, s;
    p = (a + b + c)/2;
    s = sqrt(p*(p-a)*(p-b)*(p-c));
    cout << fixed << setprecision(1) << s << endl;
    return 0;
}