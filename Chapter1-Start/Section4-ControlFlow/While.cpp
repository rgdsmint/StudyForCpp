#include <iostream>
using namespace std;

int main() {
    // 从1到10(包含)所有整数的和
    int sum = 0;
    int num = 1;
    while (num <= 10) {
        sum += num;
        num++;
    }
    cout << "从1到10(包含)所有整数的和是: "
         << sum << endl;
    return 0;
}