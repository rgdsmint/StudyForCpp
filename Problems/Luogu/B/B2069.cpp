#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	double p[30];
	double q[30];
	double sum[30];
	p[0]=1;
	q[0]=2;
	sum[0]=2.0;
	for(int i = 1; i<30;i++){
		p[i] = q[i-1];
		q[i] = q[i-1]+p[i-1];
		sum[i] = sum[i-1]+q[i]/p[i];
	}
	printf("%.4lf",sum[a-1]);
	return 0;
}
