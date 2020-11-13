#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int nums;
    double minus, zero, positive, temp;
    while(cin >> nums) {
        minus = zero = positive = 0;
        if (nums == 0) {
            continue;
        }
        for(int i = 1; i <= nums; i++) {
            cin >> temp;
            if(temp < 0) {
                minus++;
            } else if(temp == 0) {
                zero++;
            } else {
                positive++;
            }
        }
        cout << minus << " "
            << zero << " "
            << positive << endl;
    }
    return 0;
}