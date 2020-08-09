#include <iostream>
#include <iomanip>
using namespace std;
#define PI 3.1415927
int main() {
    double r, volume;
    double fourThirds = 4.0/3.0;
    while(cin >> r) {
        volume = fourThirds * r * r * r * PI;
        cout << fixed << setprecision(3) << volume << endl;
    }
    return 0;
}