#include <iostream>
using namespace std;

int main() {
	int le;
	cin >> le;
	int a[le];
	for(int i = le-1; i>=0; i--){
		cin >> a[i];
	}
	for(int i = 0; i<=le-1; i++){
		cout << a[i] << " ";
	}

	return 0;
}
