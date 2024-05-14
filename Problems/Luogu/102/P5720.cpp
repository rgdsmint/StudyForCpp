#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
    int a,d;
    d=1;
    cin >> a;
    while (a != 1){
        a = floor(a/2);
        d++;
    }
    cout << d << endl;
  
}