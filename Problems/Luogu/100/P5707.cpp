#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int time,hour,minute;
    double speed,distance;
    cin >> distance >> speed;
    hour = 7;
    minute = 60;
    double f_time = distance/speed;
    time = (int)distance/speed;
    if(f_time - time > 0) {
        time += 1;
    }
    time += 10;
    //cout << setw(2) << setfill('0') << time;
    for(;time >=60; time -= 60) {
        if(hour > 0) {
            hour -= 1;
        } else {
            hour = 23;
        }
    }
    minute -= time;
    cout << setw(2) << setfill('0') << hour << ":"
        <<  setw(2) << setfill('0') << minute << endl;
    return 0;
}