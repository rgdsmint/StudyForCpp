#include <iostream>
using namespace std;

int main() {
	int a,b,c;
	cin >> a >> b >> c;
	for(int i = 2; i <= min(a,min(b,c))/2+1; i++){
		if((a%i==b%i)&&(a%i==c%i)){
			cout << i;
			return 0;
		}
	}
	return 0;
}
