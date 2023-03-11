#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
int exchange(int& a, int& b);
int main() {
    int a = 10, b =20;
    exchange(a, b);
    cout << a << "  " << b << endl;
    return 0;
}
int exchange(int& a, int&b){
    int temp;
    temp = *&a;
    *&a = *&b;
    *&b = temp;
}