#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	double stu[a],ave;
	for(int i = 0; i<a;i++){
		cin >> stu[i];
	}
	for(int i = 0; i<a;i++){
		ave+=stu[i];
	}
	ave = ave/a;
	printf("%.2lf",ave);
	return 0;
}
