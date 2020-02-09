#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int length, sum = 0;
    while(cin >> length) {
        for (int i = 1; i <= length; i++) {
            sum += i;
        }
        cout << sum << endl << endl;
        sum = 0;
    }
    return 0;
}