#include <algorithm>
#include <iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a[3];
    char b[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a,a+3);
    cin >> b[0] >> b[1] >> b[2];
    cout << a[b[0] - 'A'] << " " << a[b[1] - 'A'] << " " << a[b[2] - 'A'];
    return 0;
}
