#include <iostream>
using namespace std;

int main() {
	int a,b,f;
	char c;
	cin >> a >> b >> c >> f;
	if(!f) {
		for(int i = 1; i <= b; i++)
			cout << c;
		cout << "\n";
		for(int i = 1; i <= a-2; i++) {
			cout << c;
			for(int i = 1; i <= b-2; i++)
				cout << " ";
			cout << c << "\n";
		}
		for(int i = 1; i <= b; i++)
			cout << c;
	} else {
		for(int i = 1; i <= a; i++) {
			for(int i = 1; i <= b; i++)
				cout << c;
			cout << "\n";
		}
	}

	return 0;
}
