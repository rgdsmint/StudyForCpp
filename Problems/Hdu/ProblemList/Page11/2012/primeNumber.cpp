#include <iostream>
#include <cmath>
using namespace std;

int isPrime(int);
int main() {
    int begin, end, count;
    while (cin >> begin >> end) {
        count = 0;
        if ((begin == 0) && (end == 0)) {
            continue;
        }
        for (int index = begin; index <= end; index++) {
            if (!isPrime(index)) {
                count++;
            }
        }
        if (count == 0) {
            cout << "OK" << endl;
        } else {
            cout << "Sorry" << endl;
        }
    }
    return 0;  
}

int isPrime(int temp) {
    int value;
    value = temp*temp + temp + 41;
    for (int n = 2; n <= ((int)sqrt(value) + 1); n++) {
        if (value % n == 0) {
            return 0;
        }
    }
    return 1;
}