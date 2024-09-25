#include <iostream>
using namespace std;



int main() {
	// Function cin don't read space
	string a;
	int f = 1;
	while(cin >> a) {
		if(f) {
			cout << a.size();
			f--;
		}
		else {
			cout << "," << a.size();
		}
	}
	
	return 0;
}
