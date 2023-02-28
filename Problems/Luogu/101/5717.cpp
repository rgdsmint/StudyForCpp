#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int triangle[3] = {a, b, c}; 
    sort(triangle, triangle + 3);
    if (triangle[0] + triangle[1] <= triangle[2]) {
        cout << "Not triangle\n";
    } else if (pow(triangle[0],2) + pow(triangle[1],2) == pow(triangle[2],2)) {
            cout << "Right triangle\n"; 
    } else if (pow(triangle[0],2) + pow(triangle[1],2) - pow(triangle[2],2) > 0) {
        cout << "Acute triangle\n";
        if (triangle[0] == triangle[1] || triangle[1] == triangle[2]) {
            cout << "Isosceles triangle\n";
            if (triangle[0] == triangle[1]&&triangle[1] == triangle[2]) {
                cout << "Equilateral triangle\n";
            }
        }
    } else {
        cout << "Obtuse triangle\n";
        if (triangle[0] == triangle[1]) {
            cout << "Isosceles triangle\n";
        }
    }
    return 0;
}
