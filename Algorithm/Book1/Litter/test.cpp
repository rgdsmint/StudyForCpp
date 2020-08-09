#include <string>
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char ch[255];
    string str;
    while (cin >> str) {  
        strcpy(ch, str.c_str());     
        int length = str.length();
        if (length % 2 == 0) {
            int mid = length/2;
            int right = 0;
            for (int i = 0; i <= mid; i++) {
                if (ch[i] == ch[length - 1 - i]) {
                    right++;
                }
            }
            if (right = mid) {
                cout << "yes" << endl;
            }
        } else {
            int mid = (length - 1/2);
            int right = 0;
            for (int i = 0; i <= mid; i++) {
                if (ch[i] == ch[length - 1 - i]) {
                    right++;
                }
            }
            if (right = mid) {
                cout << "yes" << endl;
            }
        }
    }
}
