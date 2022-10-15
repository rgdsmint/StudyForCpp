#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    double c;
    cin >> c;
    string ch;
    stringstream ss;
    ss << setprecision(4) << c;
    ch = ss.str();
    char re[5];
    int j = 0;
    for(int i = ch.length() - 1; i >= 0; i--) {
        re[j] = ch[i];
        j++;
    }
    string numStr = re;
    float num;
    num = stof(numStr);
    cout << num << endl;
    return 0;
}