#include <iostream>
using namespace std;



int main() {
	string a;
	while(cin >> a) {
		for(int i = a.size() - 1; i >= 0; i--) {
			cout << a[i];
		}
		cout << "\n";
	}
	
	
	return 0;
}