#include <iostream>
using namespace std;

int main() {
	int a[5], ate = 0;
	for(int i = 0; i < 5; i++) {
		cin >> a[i];
	}
	for(int i = 0; i < 5; i++) {
		ate += a[i]%3;
		if(!i) {
			a[4] += a[i]/3;
			a[i+1] += a[i]/3;
			a[i] = a[i]/3;
		} else if(i == 4) {
			a[0] += a[i]/3;
			a[i-1] += a[i]/3;
			a[i] = a[i]/3;
		} else {
			a[i + 1] += a[i]/3;
			a[i-1] += a[i]/3;
			a[i] = a[i]/3;
		}
	}
	for(int i = 0; i < 5; i++) {
		cout <<  a[i] << " ";
	}
	cout << "\n" << ate;
	return 0;
}
