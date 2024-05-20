#include <iostream>
#include <cmath>
using namespace std;

double d(double x1,double y1,double x2,double y2){
	return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
int main() {
	double x1,y1,x2,y2,x3,y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	double d12 = d(x1,y1,x2,y2);
	double d13 = d(x1,y1,x3,y3);
	double d32 = d(x3,y3,x2,y2);
	double p = (d12+d13+d32)/2;
	printf("%.2f",sqrt(p*(p-d12)*(p-d13)*(p-d32)));
	return 0;
}
