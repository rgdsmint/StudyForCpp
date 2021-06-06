#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string str;
    int T = 0;
    cin >> T;
    while (T > 0) {
        cin >> str;
        int score = 0;
        int length = str.length();
        int OLength = 0;
        for (int i = 0; i < length; i++) {
            if (str[i] == 'O') {
                OLength++;
                if (i == length - 1) {
                    for (int j = 1; j <= OLength; j++) {
                        score += j;
                    }
                }
            } else {
                for (int j = 1; j <= OLength; j++) {
                    score += j;
                }
                OLength = 0;
            }
        }
        cout << score << endl;
        T--;
    }
    
}