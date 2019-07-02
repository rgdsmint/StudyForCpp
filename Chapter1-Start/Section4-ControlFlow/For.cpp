// 用for语句实现while.cpp中的功能

#include <iostream>
using namespace std;

int main() {
    // 从1到10(包含)所有整数的和
    int sum = 0;
    for (int i = 0; i <= 10; i++) {
        sum += i;
    }
    cout << "从1到10(包含)所有整数的和是: "
         << sum << endl;
    return 0;
}