#include <iostream>
using namespace std;

int main() {
	int a,c,p=0;
	cin >> a;
	int b[a];
	for(int i = 0; i < a; i++){
		cin >> b[i];
	}
	cin >> c;
	for(int i = 0; i < a; i++){
		if(c == b[i])
			p++;
	}
	cout << p;
	return 0;
}
