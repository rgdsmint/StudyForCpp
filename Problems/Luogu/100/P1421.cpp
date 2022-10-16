#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a,b,c,money;
    cin >> a >> b;
    money = a*10 + b;
    c = (money - (money % 19))/19;
    cout << c << endl;
    return 0;
}