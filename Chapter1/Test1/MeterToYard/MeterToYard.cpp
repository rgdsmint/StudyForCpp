#include <iostream>
using namespace std;

double meterToYard(double);
int main() {
    double meter;
    cout << "What is the meter: ";
    cin >> meter;
    double yard = meterToYard(meter);
    cout << "The "
        << meter
        << " meters is "
        << yard
        << "yards" << endl;
    return 0;
    
}

double meterToYard(double meter) {
    return meter * 1.0936;
}
