#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    double sum1,sum2,c;
    int n,k;
    sum1 = sum2 = c = 0;
    cin >> n >> k;
    for(int i = 1; i<=n; i++) {
        if(i%k == 0) {
            c++;
            sum1+=i;
        } else {
            sum2+=i;
        }
    }
    printf("%.1lf %.1lf",sum1/c,sum2/(n-c));
  
}