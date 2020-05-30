#include <iostream>
#include <cstring>
#define maxn 1010
int a[maxn];
int main() {
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k, first = 1;
    memset(a, 0, sizeof(a));
    cin >> n >> k;
    for (int i = 1; i <= k; i++) {
        for (int j = 1; j <= n; j++) {
            if (j % i == 0) {
                a[j] = !a[j]; //控制是0还是1
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        if (a[i]) {
            if (first) {
                first = 0;
            } else {
                cout << " ";
            }
            cout << i;
        }
    }
    return 0;
}