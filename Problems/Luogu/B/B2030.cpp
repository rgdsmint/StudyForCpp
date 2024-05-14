#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	printf("%.3lf", sqrt(pow(c-a,2)+pow(d-b,2)));
	return 0;
}
