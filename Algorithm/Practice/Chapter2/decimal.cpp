#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    double a, b, c;
    int count = 1;
    while (cin >> a >> b >> c && (a != 0 || b != 0 || c != 0)) {
        double temp = a / b;
        cout << fixed << setprecision(c) 
            << "Case "<< count << ": "<< temp << endl;
        count++;
    }
    return 0;
}
