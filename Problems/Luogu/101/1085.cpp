#include <iostream>
using namespace std;
int main() {
    int terrible,before,after,time;
    terrible = 0;
    for(int i = 1; i <= 7; i++) {
        cin >> before >> after;
        if (i==1){
            time = before + after;
        }
        if(before + after > time && before + after > 8) {
            terrible = i;
            time = before + after;
        }
    }  
    cout << terrible;
}

