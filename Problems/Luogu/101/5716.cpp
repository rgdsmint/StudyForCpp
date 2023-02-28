#include <iostream>
using namespace std;
bool is_leapYear(int year);
int main() {
    int year, month;
    cin >> year >> month;
    if(month==1||month==3||month==5||month==7||month==8||month==10||month==12) {
        cout << 31;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        cout << 30;
    } else {
        if(is_leapYear(year)) {
            cout << 29;
        } else {
            cout << 28;
        }
    }
    
}

bool is_leapYear(int year) {
    if(year%100!= 0 && year%4 == 0) 
        return true;
    else if(year%400 == 0)
        return true;
    else
        return false;
}