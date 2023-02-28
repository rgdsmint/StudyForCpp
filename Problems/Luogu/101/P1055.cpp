#include <algorithm>
#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a[10];
    string b,d;
    cin >> b;
    int c = 0;
    int rcode = 0;
    for(int i = 0; i < 13; i++) {
        if(b[i] != '-'){
            if(b[i] != 'X'){
                d = b[i];
                a[c] = atoi(d.c_str());
                c++;
            } else {
                a[c] = 10;
            }

        } 
    }
    for(int i = 0; i < 9; i++) {
        rcode += a[i]*(i+1);
    }
    rcode %= 11;
    if(rcode != a[9]) {
        for(int i = 0; i < 9; i++) {
            cout << a[i];
            if(i==0||i==3||i==8){
                cout<<"-";
            }
        }
        if(rcode==10){
                cout << "X";
        } else {
            cout << rcode;
        }
    } else {
        cout << "Right";
    }
    return 0;
}
