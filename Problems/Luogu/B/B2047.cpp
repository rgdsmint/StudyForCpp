#include <iostream>
using namespace std;

int main()
{
	double x;
	cin >> x;
	if (x >= 0 && x < 5) {
		printf("%.3lf",-x + 2.5);
	}
	else if (x >= 5 && x < 10) {
		printf("%.3lf",2-1.5*(x-3)*(x-3));
	}
	else {
		printf("%.3lf",x/2-1.5);
	}
	return 0;
}