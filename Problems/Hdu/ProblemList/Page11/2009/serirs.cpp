#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double first, num, sum;
    while(cin >> first >> num) {
        sum = first;
        for(int i = 1; i < num; i++) {
            sum += sqrt(first);
            first = sqrt(first);
        }
        cout << fixed << setprecision(2) << sum << endl;
    }
    return 0;
}