// Page 11 Practice 1.9
#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int val = 50;
    while (val <= 100) {
        sum+=val;
        val++;
    }
    cout << "The sum of 50 to 100 is" << sum << endl;
    return 0;
}