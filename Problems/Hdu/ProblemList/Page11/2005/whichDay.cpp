#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main() {
    int year, month, day, number; 
    int normalDaysOfMonth[] = {0, 31, 59, 80, 120, 151, 181, 212, 243, 273, 304, 334};
    int specialDaysOfMonth[] = {0, 31, 60, 81, 121, 152, 182, 213, 244, 274, 305, 335};
    while(scanf("%d/%d/%d", &year, &month, &day) != EOF) {
        if ((year % 100 == 0 && year % 400 == 0) || (year % 100 != 0 && year % 4 == 0)) {
            cout << specialDaysOfMonth[month-1] + day << endl;
        } else {
            cout << normalDaysOfMonth[month-1] + day << endl;
        }
    }
    return 0;
}