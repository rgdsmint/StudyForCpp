#include <iostream>
#include <iomanip>
using namespace std;
double even(int);
double uneven(int);
int main() {
    int count, polynomial;
    double sumOfEven, sumOfUneven;
    while(cin >> count) {
        for(int i = 1; i <= count; i++) {
            sumOfEven = 0;
            sumOfUneven = 0;
            cin >> polynomial;
            for(int pos = 1; pos <= polynomial; pos++) {
                if(pos % 2 == 1) {
                    sumOfUneven += uneven(pos);
                } else {
                    sumOfEven += even(pos);
                }
            }
            cout << fixed << setprecision(2) 
            << sumOfEven + sumOfUneven << endl;
        }
    }
}

double even(int tem) {
    return -(1.0/(double)tem);
}
double uneven(int tem) {
    return 1.0/(double)tem;
}