#include <iostream>
using namespace std;

int main() {
	int length;
	cin >> length;
	int a[length];
	int b[length];
	int c = 0;
	for(int i = 0; i < length; i++) {
		cin >> a[i];
	}
	for(int i = 0; i < length; i++) {
		cin >> b[i];
	}
	for(int i = 0; i < length; i++) {
		c+=a[i]*b[i];
	}
	cout << c;
	return 0;
}
