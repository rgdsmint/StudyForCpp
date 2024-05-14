#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n,flag;
    cin >> n;
    flag = 1;
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            cout << setfill('0') << setw(2) << flag;
            flag++;
        }
        cout << endl;
    }
}