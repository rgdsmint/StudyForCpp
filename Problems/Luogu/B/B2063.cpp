#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double a,b;
	cin >> a >> b;
	printf("%.4lf",a*pow(1+0.001,b));

	return 0;
}
