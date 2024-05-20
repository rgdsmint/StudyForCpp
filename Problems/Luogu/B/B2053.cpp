#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double a,b,c,d,x1,x2;
	cin >> a >> b >> c;
	d = b*b-4*a*c;
	if(d < 0) {
		cout << "No answer!";
	}	
	else {
		x1 = (-b-sqrt(d))/(a*2);
		x2 = (-b+sqrt(d))/(a*2);
		if(!d)
			printf("x1=x2=%.5f",x1);
		else {
			printf("x1=%.5f;x2=%.5f",min(x1,x2),max(x1,x2));
		}
	}

	return 0;
}
