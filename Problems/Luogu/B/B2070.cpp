#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a;
	cin >> a;
	double an[a] = {0};
	double sum[a] = {0};
	for(int i = 0; i < a; i++){
		if(!i){
			an[i] = pow(-1,i)/(i+1);
			sum[i] = an[i];
		} else {
			an[i] = pow(-1,i)/(i+1);
			sum[i] = sum[i-1]+an[i];
		}
		
	}
	printf("%.4lf",sum[a-1]); 
	return 0;
}
