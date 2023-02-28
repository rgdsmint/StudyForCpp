#include <algorithm>
#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    double elec;
    cin >> elec;
    double price;
    if(elec<=150) {
        price = elec*0.4463;
    } else if(150 < elec&& elec <= 400){
        price = 150*0.4463+(elec-150)*0.4663;
    } else{
        price = 150*0.4463+250*0.4663+(elec-400)*0.5663;
    }
    cout << setiosflags(ios::fixed) << setprecision(1) << price;

    return 0;
}
