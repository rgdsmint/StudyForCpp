#include <iostream> 
#include <cmath>
using namespace std;

int main() {
    double area;
    cout << "What number area is: ";
    cin >> area;
    double side = sqrt(area);
    cout << "the side is: " << side << endl;
    return 0;
}
