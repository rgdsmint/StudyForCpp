#include <iostream>
#include <cmath>
using namespace std;
double getSum(double n) {
    double sum = 0;
    for(double i = 1; i<= n; i++) {
        sum += 1/i;
    }
    return sum;
}
int main() {
    long long n, t;
    double sum = 0;
    cin >> n;
    t = (int)exp(n - 1);
    sum = getSum(t);
    while (1) {
        if (sum > n) {
            cout << t;
            return 0;
        } else {
            t++;
            sum += 1/(double)t;
        }
    }
}