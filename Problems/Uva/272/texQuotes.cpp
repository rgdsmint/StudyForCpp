#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() { 
    int c, flag = 1;
    while((c = getchar()) != EOF) {
        if (c == '"') {
            cout << (flag?"``":"''");
            flag = !flag;
        } else {
            cout << (char)c;
        }  
    }
    return 0;
}