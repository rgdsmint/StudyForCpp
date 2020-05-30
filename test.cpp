#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    int a[100];
    int n, k, first = 1;
    memset(a, 0, sizeof(a));
    cout << a[0];
    a[0] = !a[0];
    cout << a[0];
    a[0] = !a[0];
    cout << a[0];
    a[0] = !a[0];
    cout << a[0];
    return 0;
}
