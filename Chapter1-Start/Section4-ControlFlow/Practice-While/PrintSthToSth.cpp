// Page 11 Practice 1.11
#include <iostream>
using namespace std;

int main() {
    cout << "请输入两个数: ";
    int v1, v2;
    cin >> v1 >> v2;
    cout << v1 << "到" << v2 << "间的所有整数如下:" << endl;
    if (v1 > v2) {
        while (v1 >= v2) {
            cout << v1 << " ";
            v1--;
        } 
    } else if (v1 < v2) {
        while (v1 <= v2) {
            cout << v1 << " ";
            v1++;
        }
    } else {
        cout << v1;
    }
    cout << endl;
    return 0;
}