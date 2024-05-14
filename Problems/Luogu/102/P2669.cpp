#include <iostream>
using namespace std;
int main() {
    int n,t = 1;
    cin >> n;
    while(n > t*(t+1)/2) {
        t++;   
    }
    if(n == t*(t+1)/2) {
        cout << t*(t+1)*(2*t+1)/6;
    } else {
        cout << (t-1)*t*(2*t-1)/6 + t*(n - (t-1)*t/2);
    }
    return 0;
}