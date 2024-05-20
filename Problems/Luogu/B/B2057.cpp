#include <iostream>
using namespace std;

int main() {
	int a,maxsc=0,b;
	cin >> a;
	for(int i = 0; i<a; i++){
		cin >> b;
		maxsc = max(b,maxsc);
	}

	cout << maxsc;
	return 0;
}
