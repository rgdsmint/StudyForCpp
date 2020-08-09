#include <iostream>
using namespace std;

int exchange(int& a, int& b);
int main() {
    int v1, v2, v3, tmp;
    string str;
    while (cin >> str) {
        v1 = str[0];
        v2 = str[1];
        v3 = str[2];
        if (v1 > v2) {
            exchange(v1, v2);
        }
        if (v1 > v3) {
            exchange(v1, v3);
        }
        if (v2 > v3) {
            exchange(v2, v3);
        }
        char ch1, ch2, ch3;
        ch1 = v1;
        ch2 = v2;
        ch3 = v3;
        cout << ch1 << " " << ch2 << " " << ch3 << endl;
    }
    return 0;
}
int exchange(int& a, int& b){
    int temp;
    temp = *&a;
    *&a = *&b;
    *&b = temp;
}
