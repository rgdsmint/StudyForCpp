#include <iostream>
#include "algorithm"
using namespace std;

int main() {
	int a;
	double s = 0;
	double d = 0;
	cin >> a;
	double arr[a];
	double arr_a[a-2];
	for(int i = 0; i < a; i++){
		cin >> arr[i];
	}
	sort(arr,arr+a);
	for(int i = 0; i < a - 2; i++){
		arr_a[i] = arr[i+1];
	}
	for(int i = 0; i < a - 2; i++){
		s+=arr_a[i];
	}
	d = abs(arr_a[0] - s/(a-2));
	for(int i = 1; i < a - 2; i++){
		if(abs(arr_a[i] - s/(a-2)) > d)
			d = abs(arr_a[i] - s/(a-2));
	}
	printf("%.2lf %.2lf",s/(a-2),d);
	return 0;
}
