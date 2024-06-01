#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double a,ans=0;
	cin >> a;
	ans = a;
	for(int i = 1; i < 10; i++){
		ans += a*pow(0.5,i)*2;
	}
	cout << ans << endl;
	cout << a*pow(0.5,10);
	return 0;
}
