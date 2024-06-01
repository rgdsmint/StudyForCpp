#include <iostream>
using namespace std;

int main() {
	long long a;
	cin >> a;
	for(int i = 2; i <= 10000000; i++){
		if(a%i==0) {
			cout << a/i;
			break;
		}
			
	}
	return 0;
}
