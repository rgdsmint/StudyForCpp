#include <iostream>
#define maxn 105
int a[maxn];
int main() {
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(0);
    int x, n = 0;
    while (cin >> x) {
        a[n++] = x;
    }
    for (int i = n - 1; i >= 1; i--) {
        cout << a[i];
    }
    cout << a[0] << endl;
    
    
    return 0;
}