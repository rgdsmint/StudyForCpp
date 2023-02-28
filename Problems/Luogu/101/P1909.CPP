#include <iostream>
using namespace std;

int main() {
    int need;
    int countPer, price, totalPrice;
    cin >> need;
    totalPrice = 1000000000;
    for(int i = 1; i <= 3; i++) {
        cin >> countPer >> price;
        if(need%countPer == 0 && need/countPer*price < totalPrice) {
            totalPrice = need/countPer*price;
        } else if(need%countPer != 0 && (need/countPer+1)*price < totalPrice) {
            totalPrice = (need/countPer+1)*price;
        }
    }
    cout << totalPrice;
}