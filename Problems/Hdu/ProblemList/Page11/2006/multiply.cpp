#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int multiply;
    int count, num;
    while(cin >> count) {
        multiply = 1;
        for (int i = 1; i <= count; i++) {
            cin >> num;
            if (num % 2 == 1) {
                multiply *= num;
            }
        }
        cout << multiply << endl;
    }
    return 0;
}