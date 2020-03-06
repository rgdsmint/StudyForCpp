#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m, count = 1;
    
    while (cin >> n >> m && (n != 0 || m != 0)) {
        double sum = 0.0;
        for (int i = n; i <= m; i++) {
            sum += (1.0/i/i);
        }
        printf("Case %d: %.5f\n", count, sum);
        count++;
    }
    return 0;
}
