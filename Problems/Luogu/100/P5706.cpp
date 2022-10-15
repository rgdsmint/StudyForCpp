#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int person;
    double a;
    cin >> a >> person;
    cout << fixed << setprecision(3) << a/person << endl;
    cout << person*2 << endl;
    return 0;
}