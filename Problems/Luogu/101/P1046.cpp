#include <algorithm>
#include <iostream>
using namespace std;
void gcd(int a, int b);
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a[10];
    int b,c;
    c = 0;
    for(int i = 0; i<10; i++) {
        cin >> a[i];
    }
    cin >> b;
    for(int i = 0; i<10; i++) {
        if(a[i] <= b+30){
            c++;
        }
    }
    cout << c;
    return 0;
}
