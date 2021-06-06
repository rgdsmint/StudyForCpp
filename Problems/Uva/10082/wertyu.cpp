#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
    char s[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    int c, index;
    while ((c = getchar()) != EOF) {
        for (index = 0; c != s[index] && index < strlen(s); index++);
        if (s[index]) {
            cout << s[index - 1];
        } else {
            cout << (char)c;
        }
    }
    return 0;
}