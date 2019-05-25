#include <iostream>
using namespace std;
int power(int);
int main() {
    cout << "NUM: ";
    int num;
    cin >> num;
    int numPow = power(num);
    cout << "The num pow is: " << numPow <<endl;
    return 0;
}

int power(int num) {
    return num * num;
}
