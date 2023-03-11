#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n,a,min,flag = 0;
    cin >> n;
    while(n-1) {
        cin >> a;
        if(!flag) {
            flag++;
            min = a;
        }
        if(a<min){
            min = a;
        }
        n--;
    }
    cout << min << endl;
}