#include <iostream>
using namespace std;

int main() {
    int n,x,d,t,flag = 0;
    cin >> n >> x;
    for(int i = 1; i <= n; i++) {
        t = i;
        if (t < 10) {
            if (t == x)
                flag++;
        } else {
            while(t) {
                d = t%10;
                if (d == x)
                    flag++;
                t /= 10;
            }
        }
        
        
    }
    cout << flag;
    return 0;
}