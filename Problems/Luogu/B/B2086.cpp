#include <iostream>
using namespace std;

int main() {
	int a,b,c;
	cin >> a >> b >> c;
	int p = 0;
	for(int i = 0; i<=c; i++){
		for(int j = 0; j<=c; j++){
			if(i*a+j*b==c)
				p++;
		}
	}
	cout << p;
	return 0;
}
