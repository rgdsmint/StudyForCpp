#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	int stu[a];
	double ave=0;
	for(int i = 0; i<a;i++){
		cin >> stu[i];
	}
	for(int i = 0; i<a;i++){
		ave+=stu[i];
	}
	cout << (int)ave << " ";
	ave = ave/a;
	printf("%.5lf",ave);
	return 0;
}
