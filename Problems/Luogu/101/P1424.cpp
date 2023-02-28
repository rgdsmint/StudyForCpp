#include <algorithm>
#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int x, n, r,k;
    cin >> x >> n;
    if(n%7==0){
        k = n/7*1250;
    } else {
        r = n - n%7;
        if((n%7-1+x) < 6) {
            k = 1250*r/7+n%7*250;
        } else if((n%7-1+x) < 7){
            k = 1250*r/7+(n%7-1)*250;
        } else {
            if(x==7){
                k = 1250*r/7+(n%7-1)*250;
            } else {
                k = 1250*r/7+(n%7-2)*250;
            }    
        }
    }
    cout << k;
    return 0;
}
