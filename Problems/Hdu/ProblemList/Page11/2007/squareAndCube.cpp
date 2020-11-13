#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int square, cube;
    int m, n;
    while(cin >> m >> n) {
        square = 0, cube = 0;
        if (m < n) {
            for (int i = m; i <= n; i++) {
                if (i % 2 == 0) {
                    square += (i*i);
                } else {
                    cube += (i*i*i);
                }
            }   
        } else {
            for (int i = n; i <= m; i++) {
                if (i % 2 == 0) {
                    square += (i*i);
                } else {
                    cube += (i*i*i);
                }
            }
        }
        cout << square << " " << cube << endl;
    }
    return 0;
}