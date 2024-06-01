#include <iostream>
using namespace std;
double calE(int n){
	double e = 1,t;
	for(int i = 1; i < n; i++){
		t = 1;
		for(int j=1; j<=i; j++){
			t*=j;
		}
		e = e + 1/t;
	}
	return e;
}
int main() {
	int a;
	cin >> a;
	printf("%.10lf", calE(a+1));
	return 0;
}
