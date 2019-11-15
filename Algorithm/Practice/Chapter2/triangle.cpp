#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a = 0;
    cin >> a;
    int count = 2 * a - 1;
    for (int i= 0; i < a; i++) {
        for(int j = 0;j < i; j++) {
            cout << " ";
        }
        for(int k = 0; k < count; k++) {
            cout << "*";
        }
        cout<< endl;
        count -= 2;
    }
    return 0;
}
